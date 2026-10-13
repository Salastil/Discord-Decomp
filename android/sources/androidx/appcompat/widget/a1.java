package androidx.appcompat.widget;

/* loaded from: classes.dex */
public class a1 extends z0 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ AppCompatTextView f914b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a1(AppCompatTextView appCompatTextView) {
        super(appCompatTextView);
        this.f914b = appCompatTextView;
    }

    @Override // androidx.appcompat.widget.z0, androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final void f(int i5) {
        super/*android.widget.TextView*/.setLastBaselineToBottomHeight(i5);
    }

    @Override // androidx.appcompat.widget.z0, androidx.appcompat.widget.AppCompatTextView.SuperCaller
    public final void j(int i5) {
        super/*android.widget.TextView*/.setFirstBaselineToTopHeight(i5);
    }
}
