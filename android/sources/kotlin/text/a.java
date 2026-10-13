package kotlin.text;

/* loaded from: classes3.dex */
public class a extends CharsKt__CharJVMKt {
    public static final boolean a(char c6, char c8, boolean z5) {
        if (c6 == c8) {
            return true;
        }
        if (!z5) {
            return false;
        }
        char upperCase = Character.toUpperCase(c6);
        char upperCase2 = Character.toUpperCase(c8);
        return upperCase == upperCase2 || Character.toLowerCase(upperCase) == Character.toLowerCase(upperCase2);
    }
}
