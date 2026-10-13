package on;

import fr.g;
import java.util.Collections;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b extends g {
    @Override // com.swmansion.rnscreens.stack.views.ChildrenDrawingOrderStrategy
    public final void a(List drawingOperations) {
        Intrinsics.checkNotNullParameter(drawingOperations, "drawingOperations");
        if (this.a) {
            Intrinsics.checkNotNullParameter(drawingOperations, "<this>");
            Collections.reverse(drawingOperations);
        }
    }
}
