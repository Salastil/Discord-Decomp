package oh;

import android.text.Editable;

/* loaded from: classes3.dex */
public final class l extends ch.p {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ n f15913d;

    public l(n nVar) {
        this.f15913d = nVar;
    }

    @Override // android.text.TextWatcher
    public final void afterTextChanged(Editable editable) {
        this.f15913d.b().a();
    }

    @Override // ch.p, android.text.TextWatcher
    public final void beforeTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
        this.f15913d.b().b();
    }
}
