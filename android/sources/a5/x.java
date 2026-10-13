package a5;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import com.android.billingclient.api.BillingResult;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.gms.internal.play_billing.a2;
import java.util.Arrays;
import java.util.Objects;

/* loaded from: classes.dex */
public final class x extends ag.a {

    /* renamed from: g, reason: collision with root package name */
    public final v f234g;

    /* renamed from: h, reason: collision with root package name */
    public final Boolean f235h;

    /* renamed from: i, reason: collision with root package name */
    public final int f236i;
    public final /* synthetic */ b j;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public x(b bVar, v vVar, Boolean bool, int i5) {
        super("com.android.vending.billing.IInAppBillingInitializeCallback", 3);
        Objects.requireNonNull(bVar);
        this.j = bVar;
        this.f234g = vVar;
        this.f235h = bool;
        this.f236i = i5;
    }

    @Override // ag.a
    public final boolean t(int i5, Parcel parcel, Parcel parcel2) {
        com.google.android.gms.internal.play_billing.v vVar;
        if (i5 != 1) {
            return false;
        }
        Parcelable.Creator creator = Bundle.CREATOR;
        Bundle bundle = (Bundle) com.google.android.gms.internal.play_billing.f.a(parcel);
        ag.a.v(parcel);
        if (bundle == null) {
            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Response bundle is null.");
            z(this.f234g, g0.f162f, 122, this.f235h.booleanValue(), null, this.f236i);
            return true;
        }
        if (!bundle.containsKey("RESPONSE_CODE")) {
            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Response bundle doesn't contain a response code");
            z(this.f234g, g0.f162f, 129, this.f235h.booleanValue(), null, this.f236i);
            return true;
        }
        if (bundle.getInt("RESPONSE_CODE") != 0) {
            z(this.f234g, g0.a(bundle.getInt("RESPONSE_CODE"), bundle.getString("DEBUG_MESSAGE", "")), 130, this.f235h.booleanValue(), k0.d.i(bundle.getInt("RESPONSE_CODE"), "Response code from Phonesky: "), this.f236i);
            return true;
        }
        if (!bundle.containsKey("BILLING_API_VERSION_KEY")) {
            com.google.android.gms.internal.play_billing.s.h("BillingClient", "Billing API version not found in response bundle.");
            z(this.f234g, g0.f162f, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT, this.f235h.booleanValue(), null, this.f236i);
            return true;
        }
        int i6 = bundle.getInt("BILLING_API_VERSION_KEY");
        b bVar = this.j;
        b.q(bVar, i6);
        bVar.k = i6 >= 3;
        Bundle bundle2 = bundle.getBundle("EXPERIMENT_VALUES_KEY");
        if (bundle2 != null) {
            try {
                com.facebook.imagepipeline.nativecode.c.f4678b = bundle2.getBoolean("DELEGATION_API_ENABLED_KEY");
            } catch (Throwable th2) {
                com.google.android.gms.internal.play_billing.s.i("BillingClient", "Error reading EnableDelegationApi experiment flag: ".concat(bundle2.toString()), th2);
            }
            try {
                bundle2.getLong("AUTO_SERVICE_RECONNECTION_SYNCHRONOUS_TIMEOUT_MS_KEY");
            } catch (Throwable th3) {
                com.google.android.gms.internal.play_billing.s.i("BillingClient", "Error reading AutoServiceReconnectionSynchronousTimeoutMs experiment flag: ".concat(bundle2.toString()), th3);
            }
            try {
                com.facebook.imagepipeline.nativecode.c.f4679c = bundle2.getLong("AUTO_SERVICE_RECONNECTION_ASYNCHRONOUS_TIMEOUT_MS_KEY");
            } catch (Throwable th4) {
                com.google.android.gms.internal.play_billing.s.i("BillingClient", "Error reading AutoServiceReconnectionAsynchronousTimeoutMs experiment flag: ".concat(bundle2.toString()), th4);
            }
            try {
                com.facebook.imagepipeline.nativecode.c.f4680d = bundle2.getInt("AUTO_SERVICE_RECONNECTION_MAX_NUM_RETRIES_KEY");
            } catch (Throwable th5) {
                com.google.android.gms.internal.play_billing.s.i("BillingClient", "Error reading AutoServiceReconnectionMaxNumRetries experiment flag: ".concat(bundle2.toString()), th5);
            }
            try {
                com.facebook.imagepipeline.nativecode.c.f4681e = bundle2.getBoolean("ENABLE_DEDUPLICATE_SERVICE_DISCONNECTED_CALLBACK");
            } catch (Throwable th6) {
                com.google.android.gms.internal.play_billing.s.i("BillingClient", "Error reading EnableDeduplicateServiceDisconnectedCallback experiment flag: ".concat(bundle2.toString()), th6);
            }
        }
        Bundle bundle3 = bundle.getBundle("ENABLED_SUBSCRIPTION_CLIENT_ACTIONS_KEY");
        if (bundle3 != null) {
            Object[] objArr = new Object[4];
            int i10 = 0;
            for (l0 l0Var : l0.values()) {
                if (bundle3.getBoolean(l0Var.name(), false)) {
                    int length = objArr.length;
                    int i11 = i10 + 1;
                    int b10 = a2.b(length, i11);
                    if (b10 > length) {
                        objArr = Arrays.copyOf(objArr, b10);
                    }
                    objArr[i10] = l0Var;
                    i10 = i11;
                }
            }
            b bVar2 = this.j;
            if (i10 == 0) {
                vVar = com.google.android.gms.internal.play_billing.d0.G;
            } else if (i10 != 1) {
                vVar = com.google.android.gms.internal.play_billing.v.m(i10, objArr);
                vVar.size();
            } else {
                Object obj = objArr[0];
                Objects.requireNonNull(obj);
                vVar = new com.google.android.gms.internal.play_billing.e0(obj);
            }
            bVar2.A = vVar;
            if (bVar2.f130f != null) {
                bVar2.f130f.f203g = bVar2.A;
            }
        }
        b bVar3 = this.j;
        if (bVar3.f134l < 3) {
            com.google.android.gms.internal.play_billing.s.h("BillingClient", "In-app billing API version 3 is not supported on this device.");
            z(this.f234g, g0.a, 36, this.f235h.booleanValue(), null, this.f236i);
        } else {
            v vVar2 = this.f234g;
            Boolean bool = this.f235h;
            int i12 = this.f236i;
            boolean booleanValue = bool.booleanValue();
            b.r(bVar3, 0);
            synchronized (bVar3.a) {
                try {
                    if (bVar3.f126b != 3) {
                        vVar2.c(i12, booleanValue);
                        vVar2.d(g0.f163g);
                    }
                } finally {
                }
            }
        }
        return true;
    }

    public final void z(v vVar, BillingResult billingResult, int i5, boolean z5, String str, int i6) {
        this.j.E(0);
        vVar.b(billingResult, i5, str, z5, i6);
        vVar.d(billingResult);
    }
}
