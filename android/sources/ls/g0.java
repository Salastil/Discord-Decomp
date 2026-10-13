package ls;

import java.util.Arrays;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class g0 {
    public final List a;

    public g0(String[] strArr) {
        this.a = Collections.unmodifiableList(Arrays.asList(strArr));
    }

    public final String toString() {
        List list = this.a;
        int size = list.size();
        StringBuilder sb2 = new StringBuilder((size * 16) + 2);
        sb2.append('{');
        boolean z5 = true;
        for (int i5 = 0; i5 < size; i5++) {
            if (z5) {
                z5 = false;
            } else {
                sb2.append(',');
            }
            sb2.append((String) list.get(i5));
        }
        sb2.append('}');
        return sb2.toString();
    }
}
