package a5;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import com.android.billingclient.api.BillingResult;
import com.google.android.gms.internal.play_billing.a4;
import com.google.android.gms.internal.play_billing.b4;
import com.google.android.gms.internal.play_billing.c4;
import com.google.android.gms.internal.play_billing.d4;
import com.google.android.gms.internal.play_billing.e4;
import com.google.android.gms.internal.play_billing.k4;
import com.google.android.gms.internal.play_billing.l4;
import java.util.Objects;

/* loaded from: classes.dex */
public final class j0 extends BroadcastReceiver {
    public final /* synthetic */ int a = 0;

    /* renamed from: b, reason: collision with root package name */
    public boolean f188b = false;

    /* renamed from: c, reason: collision with root package name */
    public Object f189c;

    /* renamed from: d, reason: collision with root package name */
    public final Object f190d;

    public j0(e4.r rVar) {
        this.f190d = rVar;
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        e4 e4Var;
        boolean z5;
        switch (this.a) {
            case 0:
                f0 f0Var = (f0) this.f190d;
                if (intent != null) {
                    com.google.android.gms.internal.play_billing.s.g("ProxyBillingReceiver", "Received intent action: ".concat(String.valueOf(intent.getAction())));
                    if (!Objects.equals(intent.getAction(), "com.android.vending.billing.IN_APP_BILLING_RESULT_UPDATE_ACTION")) {
                        if (!Objects.equals(intent.getAction(), "com.android.vending.billing.PLAY_BILLING_ACTIVITY_CREATED_ACTION")) {
                            com.google.android.gms.internal.play_billing.s.h("ProxyBillingReceiver", "Unexpected broadcast action: ".concat(String.valueOf(intent.getAction())));
                            break;
                        } else {
                            this.f188b = true;
                            if (f0Var != null) {
                                long longExtra = intent.getLongExtra("billingClientTransactionId", 0L);
                                e4.r rVar = (e4.r) f0Var;
                                try {
                                    b4 r5 = c4.r();
                                    r5.c();
                                    c4.w((c4) r5.f5728e, 4);
                                    a4 a4Var = a4.PLAY_BILLING_ACTIVITY_CREATED_ACTION;
                                    r5.c();
                                    c4.s((c4) r5.f5728e, a4Var);
                                    c4 c4Var = (c4) r5.a();
                                    k4 t5 = l4.t();
                                    if (longExtra == 0) {
                                        e4Var = (e4) rVar.f8000e;
                                    } else {
                                        d4 d4Var = (d4) ((e4) rVar.f8000e).l();
                                        d4Var.g(longExtra);
                                        e4Var = (e4) d4Var.a();
                                    }
                                    t5.e(e4Var);
                                    t5.c();
                                    l4.x((l4) t5.f5728e, c4Var);
                                    ((h0) rVar.f8001i).A((l4) t5.a());
                                    break;
                                } catch (Throwable th2) {
                                    com.google.android.gms.internal.play_billing.s.i("BillingLogger", "Unable to log.", th2);
                                    return;
                                }
                            }
                        }
                    } else if (!intent.hasExtra("RESPONSE_CODE")) {
                        com.google.android.gms.internal.play_billing.s.h("ProxyBillingReceiver", "Missing RESPONSE_CODE in intent.");
                        if (f0Var != null) {
                            ((e4.r) f0Var).C(null, intent.getLongExtra("billingClientTransactionId", 0L));
                            break;
                        }
                    } else {
                        g a = BillingResult.a();
                        a.f155d = intent.getIntExtra("RESPONSE_CODE", 0);
                        String stringExtra = intent.getStringExtra("DEBUG_MESSAGE");
                        if (stringExtra == null) {
                            stringExtra = "";
                        }
                        a.f157i = stringExtra;
                        BillingResult e9 = a.e();
                        this.f189c = e9;
                        if (f0Var != null) {
                            ((e4.r) f0Var).C(e9, intent.getLongExtra("billingClientTransactionId", 0L));
                            break;
                        }
                    }
                } else {
                    com.google.android.gms.internal.play_billing.s.h("ProxyBillingReceiver", "Null intent!");
                    break;
                }
                break;
            default:
                String action = intent == null ? null : intent.getAction();
                if (!"com.amazon.tv.networkmonitor.INTERNET_DOWN".equals(action)) {
                    z5 = "com.amazon.tv.networkmonitor.INTERNET_UP".equals(action);
                }
                Boolean bool = (Boolean) this.f189c;
                if (bool == null || bool.booleanValue() != z5) {
                    this.f189c = Boolean.valueOf(z5);
                    ((ll.a) this.f190d).f14079c.onAmazonFireDeviceConnectivityChanged(z5);
                    break;
                }
                break;
        }
    }

    public j0(ll.a aVar) {
        this.f190d = aVar;
    }
}
