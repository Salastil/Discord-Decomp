package a5;

import android.os.Process;
import android.text.TextUtils;
import android.util.Log;
import java.util.IllegalFormatException;
import java.util.Locale;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class m implements g3.e {

    /* renamed from: d, reason: collision with root package name */
    public String f193d;

    public m(String query, int i5) {
        switch (i5) {
            case 2:
                this.f193d = query;
                break;
            case 3:
                this.f193d = s4.h.d(Process.myUid(), "UID: [", Process.myPid(), "]  PID: [", "] ").concat(query);
                break;
            default:
                Intrinsics.checkNotNullParameter(query, "query");
                Intrinsics.checkNotNullParameter(query, "query");
                this.f193d = query;
                break;
        }
    }

    public static String h(String str, String str2, Object... objArr) {
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

    public static m i(ke.w wVar) {
        String str;
        wVar.G(2);
        int u5 = wVar.u();
        int i5 = u5 >> 1;
        int u6 = ((wVar.u() >> 3) & 31) | ((u5 & 1) << 5);
        if (i5 == 4 || i5 == 5 || i5 == 7) {
            str = "dvhe";
        } else if (i5 == 8) {
            str = "hev1";
        } else {
            if (i5 != 9) {
                return null;
            }
            str = "avc3";
        }
        StringBuilder sb2 = new StringBuilder();
        sb2.append(str);
        sb2.append(".0");
        sb2.append(i5);
        sb2.append(u6 >= 10 ? "." : ".0");
        sb2.append(u6);
        return new m(sb2.toString(), 2);
    }

    public void a(String str, Object... objArr) {
        if (Log.isLoggable("PlayCore", 3)) {
            Log.d("PlayCore", h(this.f193d, str, objArr));
        }
    }

    public void b(String str, Object... objArr) {
        if (Log.isLoggable("PlayCore", 6)) {
            Log.e("PlayCore", h(this.f193d, str, objArr));
        }
    }

    @Override // g3.e
    public String c() {
        return this.f193d;
    }

    public void d(Exception exc, String str, Object... objArr) {
        if (Log.isLoggable("PlayCore", 6)) {
            Log.e("PlayCore", h(this.f193d, str, objArr), exc);
        }
    }

    public void e(String str, Object... objArr) {
        if (Log.isLoggable("PlayCore", 4)) {
            Log.i("PlayCore", h(this.f193d, str, objArr));
        }
    }

    @Override // g3.e
    public void f(g3.d statement) {
        Intrinsics.checkNotNullParameter(statement, "statement");
        Intrinsics.checkNotNullParameter(statement, "statement");
    }

    public void g(String str, Object... objArr) {
        if (Log.isLoggable("PlayCore", 5)) {
            Log.w("PlayCore", h(this.f193d, str, objArr));
        }
    }
}
