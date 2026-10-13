package a6;

import android.view.View;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f239d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Function0 f240e;

    public /* synthetic */ a(int i5, Function0 function0) {
        this.f239d = i5;
        this.f240e = function0;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f239d) {
            case 0:
                this.f240e.invoke();
                break;
            case 1:
                this.f240e.invoke();
                break;
            case 2:
                this.f240e.invoke();
                break;
            case 3:
                this.f240e.invoke();
                break;
            case 4:
                this.f240e.invoke();
                break;
            case 5:
                this.f240e.invoke();
                break;
            case 6:
                this.f240e.invoke();
                break;
            default:
                this.f240e.invoke();
                break;
        }
    }
}
