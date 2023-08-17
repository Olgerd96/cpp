/**
* @ingroup TEST_UTILS
* @brief print std::vector to std::ostream.
*
* To print std::vector with POD types to std::out.
*
* @param [in]  vec  std::vector with types with ability to be printed.
*/
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& vec)
{
    std::string delimeter;
    out << "{";
    // std::copy(vec.begin(), vec.end(), std::ostream_iterator<T>(out, ", "));
    // out << "\b\b}"; // last two 'backspaces' needs to eliminate last delimiter. ex: {2, 3, 4, }
    for (auto& elem : vec)
    {
        out << delimeter << elem;
        if (delimeter.empty())
        {
            delimeter.assign(", ");
        }
    }
    out << "}";

    return out;
}
