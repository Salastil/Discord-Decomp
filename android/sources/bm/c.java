package bm;

import android.view.View;
import androidx.activity.OnBackPressedDispatcher;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.FunctionReferenceImpl;

/* loaded from: classes3.dex */
public final /* synthetic */ class c extends FunctionReferenceImpl implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f3043d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ c(int i5, Object obj, Class cls, String str, String str2, int i6, int i10) {
        super(i5, obj, cls, str, str2, i6);
        this.f3043d = i10;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        wl.f keyboardCallback;
        switch (this.f3043d) {
            case 0:
                keyboardCallback = ((d) this.receiver).getKeyboardCallback();
                break;
            case 1:
                ((OnBackPressedDispatcher) this.receiver).f();
                break;
            case 2:
                ((OnBackPressedDispatcher) this.receiver).f();
                break;
            default:
                in.a aVar = (in.a) this.receiver;
                aVar.measure(View.MeasureSpec.makeMeasureSpec(aVar.getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(aVar.getHeight(), 1073741824));
                aVar.layout(aVar.getLeft(), aVar.getTop(), aVar.getRight(), aVar.getBottom());
                break;
        }
        return Unit.a;
    }
}
