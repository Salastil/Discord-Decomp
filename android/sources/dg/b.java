package dg;

import android.os.Process;
import android.text.TextUtils;
import android.util.AndroidException;
import android.util.Log;
import java.util.IllegalFormatException;
import java.util.Locale;

/* loaded from: classes3.dex */
public final class b {
    public String a;

    public b(String str, int i5) {
        switch (i5) {
            case 2:
                this.a = str;
                break;
            default:
                this.a = s4.h.d(Process.myUid(), "UID: [", Process.myPid(), "]  PID: [", "] ").concat(str);
                break;
        }
    }

    public static String e(String str, String str2, Object... objArr) {
        if (objArr.length > 0) {
            try {
                str2 = String.format(Locale.US, str2, objArr);
            } catch (IllegalFormatException e9) {
                Log.e("PlayCore", "Unable to format ".concat(String.valueOf(str2)), e9);
                str2 = str2 + " [" + TextUtils.join(", ", objArr) + "]";
            }
        }
        return k0.d.l(str, " : ", str2);
    }

    public void a(Object... objArr) {
        if (Log.isLoggable("PlayCore", 6)) {
            Log.e("PlayCore", e(this.a, "onError(%d)", objArr));
        }
    }

    public void b(AndroidException androidException, String str, Object... objArr) {
        if (Log.isLoggable("PlayCore", 6)) {
            Log.e("PlayCore", e(this.a, str, objArr), androidException);
        }
    }

    public void c(String str, Object... objArr) {
        if (Log.isLoggable("PlayCore", 4)) {
            Log.i("PlayCore", e(this.a, str, objArr));
        }
    }

    public void d(String str, Object... objArr) {
        if (Log.isLoggable("PlayCore", 5)) {
            Log.w("PlayCore", e(this.a, str, objArr));
        }
    }
}
