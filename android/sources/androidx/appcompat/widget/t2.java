package androidx.appcompat.widget;

import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import android.widget.EditText;
import android.widget.TextView;
import com.henninghall.date_picker.pickers.AndroidNative;

/* loaded from: classes.dex */
public final class t2 implements View.OnFocusChangeListener {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ViewGroup f1115b;

    public /* synthetic */ t2(ViewGroup viewGroup, int i5) {
        this.a = i5;
        this.f1115b = viewGroup;
    }

    @Override // android.view.View.OnFocusChangeListener
    public final void onFocusChange(View view, boolean z5) {
        switch (this.a) {
            case 0:
                com.swmansion.rnscreens.b bVar = (com.swmansion.rnscreens.b) this.f1115b;
                View.OnFocusChangeListener onFocusChangeListener = bVar.f964m0;
                if (onFocusChangeListener != null) {
                    onFocusChangeListener.onFocusChange(bVar, z5);
                    break;
                }
                break;
            default:
                AndroidNative androidNative = (AndroidNative) this.f1115b;
                EditText editText = androidNative.f10051e;
                if (!z5) {
                    editText.setSelection(0, 0);
                    String valueOf = String.valueOf(((TextView) view).getText());
                    if (!TextUtils.isEmpty(valueOf)) {
                        androidNative.n(androidNative.e(valueOf.toString()), true);
                        break;
                    } else {
                        androidNative.q();
                        break;
                    }
                } else {
                    editText.selectAll();
                    break;
                }
        }
    }
}
