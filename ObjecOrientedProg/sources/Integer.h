class Integer
{
   int *m_pInt;
private:
   
public:
   Integer();
   Integer (int value);
   int GetValue () const;
   void SetValue (int value);
   ~Integer();
};