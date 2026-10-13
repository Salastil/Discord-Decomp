package com.facebook.react.devsupport;

import android.content.Context;
import androidx.core.util.Supplier;
import com.facebook.react.common.ShakeDetector;
import com.facebook.react.devsupport.ChangeBundleLocationDialog;

/* loaded from: classes3.dex */
public final /* synthetic */ class m implements ShakeDetector.ShakeListener, Supplier, ChangeBundleLocationDialog.ChangeBundleLocationDialogListener {
    public final /* synthetic */ DevSupportManagerBase a;

    public /* synthetic */ m(DevSupportManagerBase devSupportManagerBase) {
        this.a = devSupportManagerBase;
    }

    @Override // androidx.core.util.Supplier
    public Object get() {
        Context _init_$lambda$3;
        _init_$lambda$3 = DevSupportManagerBase._init_$lambda$3(this.a);
        return _init_$lambda$3;
    }

    @Override // com.facebook.react.devsupport.ChangeBundleLocationDialog.ChangeBundleLocationDialogListener
    public void onClick(String str) {
        DevSupportManagerBase.showDevOptionsDialog$lambda$18$lambda$17(this.a, str);
    }

    @Override // com.facebook.react.common.ShakeDetector.ShakeListener
    public void onShake() {
        this.a.showDevOptionsDialog();
    }
}
