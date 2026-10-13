package a5;

import com.android.billingclient.api.BillingResult;

/* loaded from: classes.dex */
public interface c {
    void onBillingServiceDisconnected();

    void onBillingSetupFinished(BillingResult billingResult);
}
