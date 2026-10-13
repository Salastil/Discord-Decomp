package androidx.appcompat.widget;

import android.text.Editable;
import android.text.TextUtils;
import android.text.TextWatcher;

/* loaded from: classes.dex */
public final class r2 implements TextWatcher {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ com.swmansion.rnscreens.b f1087d;

    public r2(com.swmansion.rnscreens.b bVar) {
        this.f1087d = bVar;
    }

    @Override // android.text.TextWatcher
    public final void afterTextChanged(Editable editable) {
    }

    @Override // android.text.TextWatcher
    public final void beforeTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
    }

    @Override // android.text.TextWatcher
    public final void onTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
        com.swmansion.rnscreens.b bVar = this.f1087d;
        Editable text = bVar.M.getText();
        bVar.f976y0 = text;
        boolean isEmpty = TextUtils.isEmpty(text);
        bVar.w(!isEmpty);
        int i11 = 8;
        if (bVar.f974w0 && !bVar.f967p0 && isEmpty) {
            bVar.R.setVisibility(8);
            i11 = 0;
        }
        bVar.T.setVisibility(i11);
        bVar.s();
        bVar.v();
        if (bVar.f962k0 != null && !TextUtils.equals(charSequence, bVar.f975x0)) {
            z2 z2Var = bVar.f962k0;
            String charSequence2 = charSequence.toString();
            com.swmansion.rnscreens.r0 r0Var = (com.swmansion.rnscreens.r0) ((ve.i) z2Var).f19405d;
            r0Var.k(new cn.b(r0Var.J, r0Var.getId(), charSequence2, 1, false));
        }
        bVar.f975x0 = charSequence.toString();
    }
}
