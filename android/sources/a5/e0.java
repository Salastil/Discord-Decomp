package a5;

import com.android.billingclient.api.BillingResult;
import com.google.android.gms.internal.play_billing.a4;
import com.google.android.gms.internal.play_billing.t3;
import com.google.android.gms.internal.play_billing.u3;
import com.google.android.gms.internal.play_billing.v3;
import com.google.android.gms.internal.play_billing.w3;
import com.google.android.gms.internal.play_billing.x3;
import com.google.android.gms.internal.play_billing.y3;

/* loaded from: classes.dex */
public abstract /* synthetic */ class e0 {
    public static final /* synthetic */ int a = 0;

    static {
        int i5 = f0.a;
    }

    public static String a(Exception exc) {
        if (exc == null) {
            return null;
        }
        try {
            String simpleName = exc.getClass().getSimpleName();
            String message = exc.getMessage();
            if (message == null) {
                message = "";
            }
            String str = simpleName + ":" + message;
            int i5 = com.google.android.gms.internal.play_billing.s.a;
            return str.length() > 40 ? str.substring(0, 40) : str;
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingLogger", "Unable to get truncated exception info", th2);
            return null;
        }
    }

    public static u3 b(int i5, int i6, BillingResult billingResult, String str, a4 a4Var) {
        try {
            x3 s2 = y3.s();
            int i10 = billingResult.a;
            s2.c();
            y3.r((y3) s2.f5728e, i10);
            String str2 = billingResult.f3601c;
            s2.c();
            y3.u((y3) s2.f5728e, str2);
            int i11 = billingResult.f3600b;
            if (i11 != 0) {
                s2.c();
                y3.w((y3) s2.f5728e, i11);
            }
            if (i5 != 0) {
                s2.c();
                y3.x((y3) s2.f5728e, i5);
            }
            if (str != null) {
                s2.c();
                y3.t((y3) s2.f5728e, str);
            }
            t3 u5 = u3.u();
            u5.e(s2);
            u5.c();
            u3.t((u3) u5.f5728e, i6);
            if (!a4Var.equals(a4.BROADCAST_ACTION_UNSPECIFIED)) {
                u5.c();
                u3.x((u3) u5.f5728e, a4Var);
            }
            return (u3) u5.a();
        } catch (Throwable th2) {
            com.google.android.gms.internal.play_billing.s.i("BillingLogger", "Unable to create logging payload", th2);
            return null;
        }
    }

    public static w3 c(int i5, a4 a4Var) {
        try {
            v3 s2 = w3.s();
            s2.c();
            w3.r((w3) s2.f5728e, i5);
            if (!a4Var.equals(a4.BROADCAST_ACTION_UNSPECIFIED)) {
                s2.c();
                w3.u((w3) s2.f5728e, a4Var);
            }
            return (w3) s2.a();
        } catch (Exception e9) {
            com.google.android.gms.internal.play_billing.s.i("BillingLogger", "Unable to create logging payload", e9);
            return null;
        }
    }
}
