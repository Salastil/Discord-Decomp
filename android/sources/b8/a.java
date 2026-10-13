package b8;

import android.text.TextPaint;
import com.discord.span.utilities.GGSansBoldSpan;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2750d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ GGSansBoldSpan f2751e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ TextPaint f2752i;

    public /* synthetic */ a(GGSansBoldSpan gGSansBoldSpan, TextPaint textPaint, int i5) {
        this.f2750d = i5;
        this.f2751e = gGSansBoldSpan;
        this.f2752i = textPaint;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit updateDrawState$lambda$0;
        Unit updateMeasureState$lambda$1;
        switch (this.f2750d) {
            case 0:
                updateDrawState$lambda$0 = GGSansBoldSpan.updateDrawState$lambda$0(this.f2751e, this.f2752i);
                return updateDrawState$lambda$0;
            default:
                updateMeasureState$lambda$1 = GGSansBoldSpan.updateMeasureState$lambda$1(this.f2751e, this.f2752i);
                return updateMeasureState$lambda$1;
        }
    }
}
