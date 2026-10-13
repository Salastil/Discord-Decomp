package app.rive.core;

import java.util.Map;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Lambda;
import u.c;

@Metadata(k = 3, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RebuggerWrapperKt$RebuggerWrapper$1 extends Lambda implements Function2<c, Integer, Unit> {
    final /* synthetic */ int $$changed;
    final /* synthetic */ Map<String, Object> $trackMap;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RebuggerWrapperKt$RebuggerWrapper$1(Map<String, ? extends Object> map, int i5) {
        super(2);
        this.$trackMap = map;
        this.$$changed = i5;
    }

    @Override // kotlin.jvm.functions.Function2
    public /* synthetic */ Object invoke(Object obj, Object obj2) {
        if (obj != null) {
            throw new ClassCastException();
        }
        invoke((c) null, ((Number) obj2).intValue());
        return Unit.a;
    }

    public final void invoke(c cVar, int i5) {
        Map<String, Object> map = this.$trackMap;
        int i6 = this.$$changed | 1;
        int i10 = 306783378 & i6;
        int i11 = 613566756 & i6;
        RebuggerWrapperKt.RebuggerWrapper(map, cVar, (i6 & (-920350135)) | (i11 >> 1) | i10 | ((i10 << 1) & i11));
    }
}
