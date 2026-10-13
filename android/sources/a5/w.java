package a5;

import android.os.Bundle;
import android.os.Parcel;
import android.os.Parcelable;
import com.android.billingclient.api.BillingConfig;
import com.android.billingclient.api.BillingResult;
import com.discord.billing.BillingManager$getUserCountry$1;
import com.google.android.gms.internal.play_billing.a4;
import com.google.android.gms.internal.play_billing.f1;
import com.google.android.gms.internal.play_billing.j1;
import org.json.JSONException;

/* loaded from: classes.dex */
public final class w extends ag.a {

    /* renamed from: g, reason: collision with root package name */
    public final /* synthetic */ int f231g;

    /* renamed from: h, reason: collision with root package name */
    public final BillingManager$getUserCountry$1.AnonymousClass1.C00111 f232h;

    /* renamed from: i, reason: collision with root package name */
    public final f0 f233i;
    public final int j;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public w(BillingManager$getUserCountry$1.AnonymousClass1.C00111 c00111, e4.r rVar, int i5, int i6) {
        super("com.android.vending.billing.IInAppBillingGetBillingConfigCallback", 3);
        this.f231g = i6;
        switch (i6) {
            case 1:
                super("com.android.vending.billing.IInAppBillingDelegateToBackendCallback", 3);
                this.f232h = c00111;
                this.f233i = rVar;
                this.j = i5;
                break;
            default:
                this.f232h = c00111;
                this.f233i = rVar;
                this.j = i5;
                break;
        }
    }

    @Override // ag.a
    public final boolean t(int i5, Parcel parcel, Parcel parcel2) {
        BillingResult billingResult;
        switch (this.f231g) {
            case 0:
                if (i5 != 1) {
                    return false;
                }
                Parcelable.Creator creator = Bundle.CREATOR;
                Bundle bundle = (Bundle) com.google.android.gms.internal.play_billing.f.a(parcel);
                ag.a.v(parcel);
                int i6 = this.j;
                a4 a4Var = a4.BROADCAST_ACTION_UNSPECIFIED;
                f0 f0Var = this.f233i;
                BillingManager$getUserCountry$1.AnonymousClass1.C00111 c00111 = this.f232h;
                if (bundle == null) {
                    BillingResult billingResult2 = g0.f162f;
                    ((e4.r) f0Var).x(e0.b(63, 13, billingResult2, null, a4Var), i6);
                    c00111.onBillingConfigResponse(billingResult2, null);
                } else {
                    int a = com.google.android.gms.internal.play_billing.s.a("BillingClient", bundle);
                    String f2 = com.google.android.gms.internal.play_billing.s.f("BillingClient", bundle);
                    g a10 = BillingResult.a();
                    a10.f155d = a;
                    a10.f157i = f2;
                    if (a != 0) {
                        com.google.android.gms.internal.play_billing.s.h("BillingClient", k0.c0(a, "getBillingConfig() failed. Response code: "));
                        BillingResult e9 = a10.e();
                        ((e4.r) f0Var).x(e0.b(23, 13, e9, null, a4Var), i6);
                        c00111.onBillingConfigResponse(e9, null);
                    } else if (bundle.containsKey("BILLING_CONFIG")) {
                        try {
                            c00111.onBillingConfigResponse(a10.e(), new BillingConfig(bundle.getString("BILLING_CONFIG")));
                        } catch (JSONException e10) {
                            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Got a JSON exception trying to decode BillingConfig. \n Exception: ", e10);
                            BillingResult billingResult3 = g0.f162f;
                            ((e4.r) f0Var).x(e0.b(65, 13, billingResult3, null, a4Var), i6);
                            c00111.onBillingConfigResponse(billingResult3, null);
                        }
                    } else {
                        com.google.android.gms.internal.play_billing.s.h("BillingClient", "getBillingConfig() returned a bundle with neither an error nor a billing config response");
                        a10.f155d = 6;
                        BillingResult e11 = a10.e();
                        ((e4.r) f0Var).x(e0.b(64, 13, e11, null, a4Var), i6);
                        c00111.onBillingConfigResponse(e11, null);
                    }
                }
                parcel2.writeNoException();
                return true;
            default:
                if (i5 != 1) {
                    return false;
                }
                Parcelable.Creator creator2 = Bundle.CREATOR;
                Bundle bundle2 = (Bundle) com.google.android.gms.internal.play_billing.f.a(parcel);
                ag.a.v(parcel);
                int i10 = this.j;
                f0 f0Var2 = this.f233i;
                if (bundle2 == null) {
                    BillingResult billingResult4 = g0.f162f;
                    android.support.v4.media.session.b.G(98, billingResult4, f0Var2, i10);
                    z(billingResult4);
                } else {
                    boolean containsKey = bundle2.containsKey("BILLING_RESULT");
                    a4 a4Var2 = a4.BROADCAST_ACTION_UNSPECIFIED;
                    if (containsKey) {
                        try {
                            byte[] byteArray = bundle2.getByteArray("BILLING_RESULT");
                            if (byteArray == null) {
                                throw new Exception("Billing result is null");
                            }
                            j1 s2 = j1.s(byteArray);
                            g a11 = BillingResult.a();
                            a11.f155d = s2.r();
                            a11.f157i = s2.t();
                            billingResult = a11.e();
                            if (billingResult.a != 0) {
                                android.support.v4.media.session.b.G(23, billingResult, f0Var2, i10);
                            } else if (!bundle2.containsKey("RESPONSE_DATA")) {
                                com.google.android.gms.internal.play_billing.s.h("GetBillingConfigDelegateToBackendCallback", "delegateToBackendAsync returned a bundle with neither an error nor response data");
                                billingResult = g0.f162f;
                                android.support.v4.media.session.b.G(101, billingResult, f0Var2, i10);
                            }
                        } catch (Exception e12) {
                            com.google.android.gms.internal.play_billing.s.i("GetBillingConfigDelegateToBackendCallback", "Failed parsing BillingResult.", e12);
                            BillingResult billingResult5 = g0.f162f;
                            ((e4.r) f0Var2).x(e0.b(100, 29, billingResult5, e0.a(e12), a4Var2), i10);
                            billingResult = billingResult5;
                        }
                    } else {
                        com.google.android.gms.internal.play_billing.s.h("GetBillingConfigDelegateToBackendCallback", "delegateToBackendAsync does not contain a billing result in the response");
                        billingResult = g0.f162f;
                        android.support.v4.media.session.b.G(99, billingResult, f0Var2, i10);
                    }
                    if (billingResult.a == 0) {
                        try {
                            byte[] byteArray2 = bundle2.getByteArray("RESPONSE_DATA");
                            if (byteArray2 == null) {
                                throw new IllegalArgumentException("Response data is null");
                            }
                            onBillingConfigResponse(billingResult, new BillingConfig(f1.r(byteArray2).s(), 0));
                        } catch (Exception e13) {
                            com.google.android.gms.internal.play_billing.s.i("GetBillingConfigDelegateToBackendCallback", "Got a JSON exception trying to decode BillingConfig. \n Exception: ", e13);
                            BillingResult billingResult6 = g0.f162f;
                            ((e4.r) f0Var2).x(e0.b(97, 29, billingResult6, e0.a(e13), a4Var2), i10);
                            z(billingResult6);
                        }
                    } else {
                        z(billingResult);
                    }
                }
                return true;
        }
    }

    public void z(BillingResult billingResult) {
        BillingManager$getUserCountry$1.AnonymousClass1.C00111 c00111 = this.f232h;
        if (c00111 != null) {
            c00111.onBillingConfigResponse(billingResult, null);
        } else {
            android.support.v4.media.session.b.G(96, billingResult, this.f233i, this.j);
        }
    }
}
