package a5;

import android.content.Context;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;

/* loaded from: classes.dex */
public final class a {
    public final Object a;

    /* renamed from: b, reason: collision with root package name */
    public volatile Object f121b;

    /* renamed from: c, reason: collision with root package name */
    public volatile Object f122c;

    public /* synthetic */ a(Object obj) {
        this.a = obj;
    }

    public boolean a() {
        try {
            Context context = (Context) this.a;
            return context.getPackageManager().getApplicationInfo(context.getPackageName(), IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT).metaData.getBoolean("com.google.android.play.billingclient.enableBillingOverridesTesting", false);
        } catch (Exception e9) {
            com.google.android.gms.internal.play_billing.s.i("BillingClient", "Unable to retrieve metadata value for enableBillingOverridesTesting.", e9);
            return false;
        }
    }
}
