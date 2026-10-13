package ps;

import java.util.Comparator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k implements Comparator {
    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        String a = (String) obj;
        String b10 = (String) obj2;
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        int min = Math.min(a.length(), b10.length());
        for (int i5 = 4; i5 < min; i5++) {
            char charAt = a.charAt(i5);
            char charAt2 = b10.charAt(i5);
            if (charAt != charAt2) {
                return Intrinsics.compare((int) charAt, (int) charAt2) < 0 ? -1 : 1;
            }
        }
        int length = a.length();
        int length2 = b10.length();
        if (length != length2) {
            return length < length2 ? -1 : 1;
        }
        return 0;
    }
}
