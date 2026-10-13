package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class n1 implements g2 {

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f5777b = new n1(0);

    /* renamed from: c, reason: collision with root package name */
    public static final n1 f5778c = new n1(1);

    /* renamed from: d, reason: collision with root package name */
    public static final n1 f5779d = new n1(2);

    /* renamed from: e, reason: collision with root package name */
    public static final n1 f5780e = new n1(3);

    /* renamed from: f, reason: collision with root package name */
    public static final n1 f5781f = new n1(4);

    /* renamed from: g, reason: collision with root package name */
    public static final n1 f5782g = new n1(5);

    /* renamed from: h, reason: collision with root package name */
    public static final n1 f5783h = new n1(6);

    /* renamed from: i, reason: collision with root package name */
    public static final n1 f5784i = new n1(7);
    public static final n1 j = new n1(8);
    public final /* synthetic */ int a;

    public /* synthetic */ n1(int i5) {
        this.a = i5;
    }

    @Override // com.google.android.gms.internal.play_billing.g2
    public final boolean a(int i5) {
        switch (this.a) {
            case 0:
                switch (i5) {
                }
            case 1:
                switch (i5) {
                    default:
                        switch (i5) {
                        }
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                    case 14:
                    case 15:
                        return true;
                }
            case 2:
                if (com.discord.chat.bridge.botuikit.a.a(i5) != 0) {
                }
                break;
            case 3:
                if ((i5 != 0 ? i5 != 1 ? i5 != 2 ? i5 != 3 ? i5 != 4 ? i5 != 5 ? null : a4.PLAY_BILLING_ACTIVITY_CREATED_ACTION : a4.IN_APP_BILLING_RESULT_UPDATE_ACTION : a4.ALTERNATIVE_BILLING_ACTION : a4.LOCAL_PURCHASES_UPDATED_ACTION : a4.PURCHASES_UPDATED_ACTION : a4.BROADCAST_ACTION_UNSPECIFIED) != null) {
                }
                break;
            case 4:
                if (i5 == 0 || i5 == 1 || i5 == 2 || i5 == 3) {
                }
                break;
            case 5:
                switch (i5) {
                }
            case 6:
                switch (i5) {
                }
            case 7:
                if (i5 == 0 || i5 == 1) {
                }
                break;
            default:
                if (i5 == 0 || i5 == 1) {
                }
                break;
        }
        return true;
    }
}
