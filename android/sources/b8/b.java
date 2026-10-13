package b8;

import android.text.TextPaint;
import com.discord.span.utilities.GGSansItalicSpan;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2753d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ GGSansItalicSpan f2754e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ TextPaint f2755i;

    public /* synthetic */ b(GGSansItalicSpan gGSansItalicSpan, TextPaint textPaint, int i5) {
        this.f2753d = i5;
        this.f2754e = gGSansItalicSpan;
        this.f2755i = textPaint;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        Unit updateMeasureState$lambda$1;
        Unit updateDrawState$lambda$0;
        switch (this.f2753d) {
            case 0:
                updateMeasureState$lambda$1 = GGSansItalicSpan.updateMeasureState$lambda$1(this.f2754e, this.f2755i);
                return updateMeasureState$lambda$1;
            default:
                updateDrawState$lambda$0 = GGSansItalicSpan.updateDrawState$lambda$0(this.f2754e, this.f2755i);
                return updateDrawState$lambda$0;
        }
    }
}
