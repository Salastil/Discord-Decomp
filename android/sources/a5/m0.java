package a5;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.os.Build;
import android.os.Bundle;
import com.android.billingclient.api.BillingResult;
import com.android.billingclient.api.Purchase;
import com.discord.billing.BillingManager;
import com.google.android.gms.internal.play_billing.a4;
import com.google.android.gms.internal.play_billing.d4;
import com.google.android.gms.internal.play_billing.e4;
import com.google.android.gms.internal.play_billing.h4;
import com.google.android.gms.internal.play_billing.j4;
import com.google.android.gms.internal.play_billing.u3;
import com.google.android.gms.internal.play_billing.v3;
import com.google.android.gms.internal.play_billing.w3;
import java.util.ArrayList;

/* loaded from: classes.dex */
public final class m0 extends BroadcastReceiver {
    public boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f194b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ n0 f195c;

    public m0(n0 n0Var, boolean z5) {
        this.f195c = n0Var;
        this.f194b = z5;
    }

    public final synchronized void a(Context context, IntentFilter intentFilter) {
        try {
            if (this.a) {
                return;
            }
            if (Build.VERSION.SDK_INT >= 33) {
                context.registerReceiver(this, intentFilter, true != this.f194b ? 4 : 2);
            } else {
                context.registerReceiver(this, intentFilter);
            }
            this.a = true;
        } catch (Throwable th2) {
            throw th2;
        }
    }

    public final synchronized void b(Context context, IntentFilter intentFilter) {
        m0 m0Var;
        try {
            try {
                if (this.a) {
                    return;
                }
                if (Build.VERSION.SDK_INT >= 33) {
                    m0Var = this;
                    context.registerReceiver(m0Var, intentFilter, "com.google.android.finsky.permission.PLAY_BILLING_LIBRARY_BROADCAST", null, true != this.f194b ? 4 : 2);
                } else {
                    m0Var = this;
                    context.registerReceiver(this, intentFilter, "com.google.android.finsky.permission.PLAY_BILLING_LIBRARY_BROADCAST", null);
                }
                m0Var.a = true;
            } catch (Throwable th2) {
                th = th2;
                throw th;
            }
        } catch (Throwable th3) {
            th = th3;
            throw th;
        }
    }

    public final synchronized void c(Context context) {
        if (!this.a) {
            com.google.android.gms.internal.play_billing.s.h("BillingBroadcastManager", "Receiver is not registered.");
        } else {
            context.unregisterReceiver(this);
            this.a = false;
        }
    }

    public final void d(Bundle bundle, BillingResult billingResult, int i5, a4 a4Var, long j, boolean z5) {
        try {
            byte[] byteArray = bundle.getByteArray("FAILURE_LOGGING_PAYLOAD");
            n0 n0Var = this.f195c;
            if (byteArray != null) {
                ((e4.r) n0Var.f199c).z(u3.v(bundle.getByteArray("FAILURE_LOGGING_PAYLOAD")), j, z5);
            } else {
                ((e4.r) n0Var.f199c).z(e0.b(23, i5, billingResult, null, a4Var), j, z5);
            }
        } catch (Throwable unused) {
            com.google.android.gms.internal.play_billing.s.h("BillingBroadcastManager", "Failed parsing Api failure.");
        }
    }

    @Override // android.content.BroadcastReceiver
    public final void onReceive(Context context, Intent intent) {
        a4 a4Var;
        BillingResult e9;
        long j;
        BillingResult billingResult;
        e4 e4Var;
        int intValue;
        String action = intent.getAction();
        int hashCode = action.hashCode();
        a4 a4Var2 = a4.LOCAL_PURCHASES_UPDATED_ACTION;
        a4 a4Var3 = a4.PURCHASES_UPDATED_ACTION;
        a4 a4Var4 = a4.ALTERNATIVE_BILLING_ACTION;
        if (hashCode == -1484087650) {
            if (action.equals("com.android.vending.billing.PURCHASES_UPDATED")) {
                a4Var = a4Var3;
            }
            a4Var = a4.BROADCAST_ACTION_UNSPECIFIED;
        } else if (hashCode != -337612916) {
            if (hashCode == 345207161 && action.equals("com.android.vending.billing.ALTERNATIVE_BILLING")) {
                a4Var = a4Var4;
            }
            a4Var = a4.BROADCAST_ACTION_UNSPECIFIED;
        } else {
            if (action.equals("com.android.vending.billing.LOCAL_BROADCAST_PURCHASES_UPDATED")) {
                a4Var = a4Var2;
            }
            a4Var = a4.BROADCAST_ACTION_UNSPECIFIED;
        }
        int i5 = (a4Var.equals(a4Var2) || a4Var.equals(a4Var4)) ? 2 : a4Var.equals(a4Var3) ? 32 : 1;
        Bundle extras = intent.getExtras();
        n0 n0Var = this.f195c;
        if (extras == null) {
            com.google.android.gms.internal.play_billing.s.h("BillingBroadcastManager", "Bundle is null.");
            f0 f0Var = n0Var.f199c;
            BillingResult billingResult2 = g0.f162f;
            ((e4.r) f0Var).w(e0.b(11, i5, billingResult2, null, a4Var));
            com.discord.billing.b bVar = n0Var.f198b;
            if (bVar != null) {
                BillingManager.handlePurchases$default((BillingManager) bVar.f3772b, billingResult2, null, false, 4, null);
                return;
            }
            return;
        }
        if (i5 == 2) {
            int i6 = com.google.android.gms.internal.play_billing.s.a;
            g a = BillingResult.a();
            a.f155d = com.google.android.gms.internal.play_billing.s.a("BillingBroadcastManager", intent.getExtras());
            Bundle extras2 = intent.getExtras();
            if (extras2 == null) {
                com.google.android.gms.internal.play_billing.s.h("BillingBroadcastManager", "Unexpected null bundle received!");
            } else {
                Object obj = extras2.get("SUB_RESPONSE_CODE");
                if (obj == null) {
                    com.google.android.gms.internal.play_billing.s.g("BillingBroadcastManager", "getOnPurchasesUpdatedSubResponseCodeFromBundle() got null response code, assuming OK");
                } else if (obj instanceof Integer) {
                    intValue = ((Integer) obj).intValue();
                    a.f156e = intValue;
                    a.f157i = com.google.android.gms.internal.play_billing.s.f("BillingBroadcastManager", intent.getExtras());
                    e9 = a.e();
                } else {
                    com.google.android.gms.internal.play_billing.s.h("BillingBroadcastManager", "Unexpected type for bundle sub response code: ".concat(obj.getClass().getName()));
                }
            }
            intValue = 0;
            a.f156e = intValue;
            a.f157i = com.google.android.gms.internal.play_billing.s.f("BillingBroadcastManager", intent.getExtras());
            e9 = a.e();
        } else {
            e9 = com.google.android.gms.internal.play_billing.s.e(intent, "BillingBroadcastManager");
        }
        long j5 = extras.getLong("billingClientTransactionId", 0L);
        boolean z5 = extras.getBoolean("wasServiceAutoReconnected", false);
        if (!a4Var.equals(a4Var3) && !a4Var.equals(a4Var2)) {
            if (a4Var.equals(a4Var4)) {
                if (e9.a != 0) {
                    d(extras, e9, i5, a4Var, j5, z5);
                    com.discord.billing.b bVar2 = n0Var.f198b;
                    com.google.android.gms.internal.play_billing.q qVar = com.google.android.gms.internal.play_billing.t.f5834e;
                    BillingManager.handlePurchases$default((BillingManager) bVar2.f3772b, e9, com.google.android.gms.internal.play_billing.x.f5880w, false, 4, null);
                    return;
                }
                n0Var.getClass();
                com.google.android.gms.internal.play_billing.s.h("BillingBroadcastManager", "No valid alternative billing listener is registered.");
                f0 f0Var2 = n0Var.f199c;
                BillingResult billingResult3 = g0.f162f;
                ((e4.r) f0Var2).z(e0.b(141, i5, billingResult3, null, a4Var), j5, z5);
                com.discord.billing.b bVar3 = n0Var.f198b;
                com.google.android.gms.internal.play_billing.q qVar2 = com.google.android.gms.internal.play_billing.t.f5834e;
                BillingManager.handlePurchases$default((BillingManager) bVar3.f3772b, billingResult3, com.google.android.gms.internal.play_billing.x.f5880w, false, 4, null);
                return;
            }
            return;
        }
        com.google.android.gms.internal.play_billing.v vVar = n0Var.f203g;
        ArrayList<String> stringArrayList = extras.getStringArrayList("INAPP_PURCHASE_DATA_LIST");
        ArrayList<String> stringArrayList2 = extras.getStringArrayList("INAPP_DATA_SIGNATURE_LIST");
        ArrayList arrayList = new ArrayList();
        if (stringArrayList == null || stringArrayList2 == null) {
            j = 0;
            Purchase j7 = com.google.android.gms.internal.play_billing.s.j(extras.getString("INAPP_PURCHASE_DATA"), extras.getString("INAPP_DATA_SIGNATURE"), vVar);
            if (j7 == null) {
                com.google.android.gms.internal.play_billing.s.g("BillingHelper", "Couldn't find single purchase data as well.");
                arrayList = null;
            } else {
                arrayList.add(j7);
            }
        } else {
            j = 0;
            com.google.android.gms.internal.play_billing.s.g("BillingHelper", "Found purchase list of " + stringArrayList.size() + " items");
            for (int i10 = 0; i10 < stringArrayList.size() && i10 < stringArrayList2.size(); i10++) {
                Purchase j10 = com.google.android.gms.internal.play_billing.s.j(stringArrayList.get(i10), stringArrayList2.get(i10), vVar);
                if (j10 != null) {
                    arrayList.add(j10);
                }
            }
        }
        if (e9.a == 0) {
            f0 f0Var3 = n0Var.f199c;
            w3 c6 = e0.c(i5, a4Var);
            e4.r rVar = (e4.r) f0Var3;
            rVar.getClass();
            try {
                v3 v3Var = (v3) c6.l();
                h4 h4Var = (h4) c6.t().l();
                h4Var.c();
                j4.s((j4) h4Var.f5728e, z5);
                v3Var.c();
                w3.v((w3) v3Var.f5728e, (j4) h4Var.a());
                w3 w3Var = (w3) v3Var.a();
                if (j5 == j) {
                    e4Var = (e4) rVar.f8000e;
                } else {
                    d4 d4Var = (d4) ((e4) rVar.f8000e).l();
                    d4Var.g(j5);
                    e4Var = (e4) d4Var.a();
                }
                rVar.H(w3Var, e4Var);
            } catch (Throwable th2) {
                com.google.android.gms.internal.play_billing.s.i("BillingLogger", "Unable to log.", th2);
            }
            billingResult = e9;
        } else {
            billingResult = e9;
            d(extras, billingResult, i5, a4Var, j5, z5);
        }
        BillingManager.handlePurchases$default((BillingManager) n0Var.f198b.f3772b, billingResult, arrayList, false, 4, null);
    }
}
