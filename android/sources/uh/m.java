package uh;

import android.os.Bundle;
import android.os.IBinder;
import android.os.Parcel;

/* loaded from: classes3.dex */
public final class m extends com.google.android.gms.internal.play_billing.e {
    public m(IBinder iBinder) {
        super(iBinder, "com.google.android.play.core.assetpacks.protocol.IAssetPackExtractionServiceCallback", 2);
    }

    public final void n(Bundle bundle) {
        Parcel b10 = b();
        int i5 = h.a;
        b10.writeInt(1);
        bundle.writeToParcel(b10, 0);
        k(3, b10);
    }
}
