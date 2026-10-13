package ai;

import android.os.Process;
import android.text.TextUtils;
import android.util.Log;
import java.io.IOException;
import java.util.AbstractCollection;
import java.util.IllegalFormatException;
import java.util.Iterator;
import java.util.Locale;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class e {
    public final String a;

    public e(String str, int i5) {
        switch (i5) {
            case 1:
                str.getClass();
                this.a = str;
                break;
            default:
                this.a = s4.h.d(Process.myUid(), "UID: [", Process.myPid(), "]  PID: [", "] ").concat(str);
                break;
        }
    }

    public static String c(String str, String str2, Object... objArr) {
        if (objArr.length > 0) {
            try {
                str2 = String.format(Locale.US, str2, objArr);
            } catch (IllegalFormatException e9) {
                Log.e("PlayCore", "Unable to format ".concat(str2), e9);
                str2 = str2 + " [" + TextUtils.join(", ", objArr) + "]";
            }
        }
        return k0.d.l(str, " : ", str2);
    }

    public void a(StringBuilder sb2, AbstractCollection abstractCollection) {
        Iterator it = abstractCollection.iterator();
        try {
            if (it.hasNext()) {
                Object next = it.next();
                Objects.requireNonNull(next);
                sb2.append(next instanceof CharSequence ? (CharSequence) next : next.toString());
                while (it.hasNext()) {
                    sb2.append((CharSequence) this.a);
                    Object next2 = it.next();
                    Objects.requireNonNull(next2);
                    sb2.append(next2 instanceof CharSequence ? (CharSequence) next2 : next2.toString());
                }
            }
        } catch (IOException e9) {
            throw new AssertionError(e9);
        }
    }

    public void b(String str, Object... objArr) {
        if (Log.isLoggable("PlayCore", 4)) {
            Log.i("PlayCore", c(this.a, str, objArr));
        }
    }
}
