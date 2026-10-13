package on;

import fr.g;
import java.util.Collections;
import java.util.List;
import kotlin.collections.c0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends g {

    /* renamed from: b, reason: collision with root package name */
    public final int f16145b;

    public a(int i5) {
        this.f16145b = i5;
    }

    @Override // com.swmansion.rnscreens.stack.views.ChildrenDrawingOrderStrategy
    public final void a(List drawingOperations) {
        Intrinsics.checkNotNullParameter(drawingOperations, "drawingOperations");
        if (this.a) {
            int i5 = this.f16145b;
            for (int f2 = c0.f(drawingOperations); i5 < f2; f2--) {
                Collections.swap(drawingOperations, i5, f2);
                i5++;
            }
        }
    }
}
