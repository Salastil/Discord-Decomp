package m1;

import android.os.Build;
import android.os.Bundle;
import android.view.inputmethod.InputConnection;
import android.view.inputmethod.InputConnectionWrapper;
import android.view.inputmethod.InputContentInfo;
import ha.l;
import hc.m;

/* loaded from: classes.dex */
public final class c extends InputConnectionWrapper {
    public final /* synthetic */ m a;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(InputConnection inputConnection, m mVar) {
        super(inputConnection, false);
        this.a = mVar;
    }

    @Override // android.view.inputmethod.InputConnectionWrapper, android.view.inputmethod.InputConnection
    public final boolean commitContent(InputContentInfo inputContentInfo, int i5, Bundle bundle) {
        l lVar = null;
        if (inputContentInfo != null && Build.VERSION.SDK_INT >= 25) {
            lVar = new l(new e(inputContentInfo));
        }
        if (this.a.a(lVar, i5, bundle)) {
            return true;
        }
        return super.commitContent(inputContentInfo, i5, bundle);
    }
}
