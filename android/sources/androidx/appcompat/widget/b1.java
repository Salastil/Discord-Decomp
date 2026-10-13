package androidx.appcompat.widget;

/* loaded from: classes.dex */
public final class b1 extends a1 {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ AppCompatTextView f924c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public b1(AppCompatTextView appCompatTextView) {
        super(appCompatTextView);
        this.f924c = appCompatTextView;
    }

    @Override // androidx.appcompat.widget.z0, androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final void m(int i5, float f2) {
        super/*android.widget.TextView*/.setLineHeight(i5, f2);
    }
}
