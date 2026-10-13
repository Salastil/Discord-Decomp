package a5;

import com.android.billingclient.api.BillingResult;

/* loaded from: classes.dex */
public abstract class g0 {
    public static final BillingResult a;

    /* renamed from: b, reason: collision with root package name */
    public static final BillingResult f158b;

    /* renamed from: c, reason: collision with root package name */
    public static final BillingResult f159c;

    /* renamed from: d, reason: collision with root package name */
    public static final BillingResult f160d;

    /* renamed from: e, reason: collision with root package name */
    public static final BillingResult f161e;

    /* renamed from: f, reason: collision with root package name */
    public static final BillingResult f162f;

    /* renamed from: g, reason: collision with root package name */
    public static final BillingResult f163g;

    /* renamed from: h, reason: collision with root package name */
    public static final BillingResult f164h;

    /* renamed from: i, reason: collision with root package name */
    public static final BillingResult f165i;
    public static final BillingResult j;
    public static final BillingResult k;

    /* renamed from: l, reason: collision with root package name */
    public static final BillingResult f166l;

    /* renamed from: m, reason: collision with root package name */
    public static final BillingResult f167m;

    /* renamed from: n, reason: collision with root package name */
    public static final BillingResult f168n;

    /* renamed from: o, reason: collision with root package name */
    public static final BillingResult f169o;

    /* renamed from: p, reason: collision with root package name */
    public static final BillingResult f170p;

    /* renamed from: q, reason: collision with root package name */
    public static final BillingResult f171q;

    /* renamed from: r, reason: collision with root package name */
    public static final BillingResult f172r;

    static {
        g a10 = BillingResult.a();
        a10.f155d = 3;
        a10.f157i = "Google Play In-app Billing API version is less than 3";
        a10.e();
        g a11 = BillingResult.a();
        a11.f155d = 3;
        a11.f157i = "Google Play In-app Billing API version is less than 9";
        a11.e();
        g a12 = BillingResult.a();
        a12.f155d = 3;
        a12.f157i = "Billing service unavailable on device.";
        a = a12.e();
        g a13 = BillingResult.a();
        a13.f155d = 2;
        a13.f157i = "Billing service unavailable on device.";
        f158b = a13.e();
        g a14 = BillingResult.a();
        a14.f155d = 5;
        a14.f157i = "Client is already in the process of connecting to billing service.";
        f159c = a14.e();
        g a15 = BillingResult.a();
        a15.f155d = 5;
        a15.f157i = "The list of SKUs can't be empty.";
        a15.e();
        g a16 = BillingResult.a();
        a16.f155d = 5;
        a16.f157i = "SKU type can't be empty.";
        a16.e();
        g a17 = BillingResult.a();
        a17.f155d = 5;
        a17.f157i = "Product type can't be empty.";
        f160d = a17.e();
        g a18 = BillingResult.a();
        a18.f155d = -2;
        a18.f157i = "Client does not support extra params.";
        f161e = a18.e();
        g a19 = BillingResult.a();
        a19.f155d = 5;
        a19.f157i = "Invalid purchase token.";
        a19.e();
        g a20 = BillingResult.a();
        a20.f155d = 6;
        a20.f157i = "An internal error occurred.";
        f162f = a20.e();
        g a21 = BillingResult.a();
        a21.f155d = 5;
        a21.f157i = "SKU can't be null.";
        a21.e();
        g a22 = BillingResult.a();
        a22.f155d = 0;
        f163g = a22.e();
        g a23 = BillingResult.a();
        a23.f155d = -1;
        a23.f157i = "Service connection is disconnected.";
        f164h = a23.e();
        g a24 = BillingResult.a();
        a24.f155d = 2;
        a24.f157i = "Timeout communicating with service.";
        f165i = a24.e();
        g a25 = BillingResult.a();
        a25.f155d = -2;
        a25.f157i = "Client does not support subscriptions.";
        j = a25.e();
        g a26 = BillingResult.a();
        a26.f155d = -2;
        a26.f157i = "Client does not support subscriptions update.";
        a26.e();
        g a27 = BillingResult.a();
        a27.f155d = -2;
        a27.f157i = "Client does not support get purchase history.";
        a27.e();
        g a28 = BillingResult.a();
        a28.f155d = -2;
        a28.f157i = "Client does not support price change confirmation.";
        a28.e();
        g a29 = BillingResult.a();
        a29.f155d = -2;
        a29.f157i = "Play Store version installed does not support cross selling products.";
        a29.e();
        g a30 = BillingResult.a();
        a30.f155d = -2;
        a30.f157i = "Client does not support multi-item purchases.";
        k = a30.e();
        g a31 = BillingResult.a();
        a31.f155d = -2;
        a31.f157i = "Client does not support offer_id_token.";
        f166l = a31.e();
        g a32 = BillingResult.a();
        a32.f155d = -2;
        a32.f157i = "Play Store version installed does not support gift code purchase.";
        f167m = a32.e();
        g a33 = BillingResult.a();
        a33.f155d = -2;
        a33.f157i = "Client does not support ProductDetails.";
        f168n = a33.e();
        g a34 = BillingResult.a();
        a34.f155d = -2;
        a34.f157i = "Client does not support launching subscription management action flow.";
        a34.e();
        g a35 = BillingResult.a();
        a35.f155d = -2;
        a35.f157i = "Client does not support in-app messages.";
        a35.e();
        g a36 = BillingResult.a();
        a36.f155d = -2;
        a36.f157i = "Client does not support user choice billing.";
        a36.e();
        g a37 = BillingResult.a();
        a37.f155d = -2;
        a37.f157i = "Play Store version installed does not support external offer.";
        a37.e();
        g a38 = BillingResult.a();
        a38.f155d = -2;
        a38.f157i = "Play Store version installed does not support multi-item purchases with season pass in one cart.";
        a38.e();
        g a39 = BillingResult.a();
        a39.f155d = -2;
        a39.f157i = "Play Store version installed does not support querying AutoPay plan purchase.";
        a39.e();
        g a40 = BillingResult.a();
        a40.f155d = -2;
        a40.f157i = "Play Store version installed does not support including suspended subscriptions.";
        a40.e();
        g a41 = BillingResult.a();
        a41.f155d = 5;
        a41.f157i = "Unknown feature";
        a41.e();
        g a42 = BillingResult.a();
        a42.f155d = -2;
        a42.f157i = "Play Store version installed does not support get billing config.";
        f169o = a42.e();
        g a43 = BillingResult.a();
        a43.f155d = -2;
        a43.f157i = "Query product details with serialized docid is not supported.";
        a43.e();
        g a44 = BillingResult.a();
        a44.f155d = -2;
        a44.f157i = "Play Store version installed does not support launching external offer flow.";
        a44.e();
        g a45 = BillingResult.a();
        a45.f155d = 4;
        a45.f157i = "Item is unavailable for purchase.";
        f170p = a45.e();
        g a46 = BillingResult.a();
        a46.f155d = -2;
        a46.f157i = "Query product details with developer specified account is not supported.";
        a46.e();
        g a47 = BillingResult.a();
        a47.f155d = -2;
        a47.f157i = "Play Store version installed does not support alternative billing only.";
        a47.e();
        g a48 = BillingResult.a();
        a48.f155d = 5;
        a48.f157i = "To use this API you must specify a PurchasesUpdateListener when initializing a BillingClient.";
        f171q = a48.e();
        g a49 = BillingResult.a();
        a49.f155d = 6;
        a49.f157i = "An error occurred while retrieving billing override.";
        f172r = a49.e();
        g a50 = BillingResult.a();
        a50.f155d = -2;
        a50.f157i = "Play Store version installed does not support the provided billing program.";
        a50.e();
        g a51 = BillingResult.a();
        a51.f155d = -2;
        a51.f157i = "Play Store version installed does not support launching external links.";
        a51.e();
        g a52 = BillingResult.a();
        a52.f155d = 5;
        a52.f157i = "A DeveloperProvidedBillingListener must be provided when initializing the BillingClient in order to use multiple payment options for this billing program.";
        a52.e();
        g a53 = BillingResult.a();
        a53.f155d = 5;
        a53.f157i = "A listener must be provided calling this method.";
        a53.e();
        g a54 = BillingResult.a();
        a54.f155d = -2;
        a54.f157i = "Play Store version installed does not support show billing program information dialog.";
        a54.e();
        g a55 = BillingResult.a();
        a55.f155d = -2;
        a55.f157i = "Play Store version installed does not support get billing choice info.";
        a55.e();
    }

    public static BillingResult a(int i5, String str) {
        g a10 = BillingResult.a();
        a10.f155d = i5;
        a10.f157i = str;
        return a10.e();
    }
}
