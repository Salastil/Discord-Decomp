package androidx.compose.ui.semantics;

import kotlin.Metadata;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import z.d;

@Metadata(d1 = {"\u0000\u0006\n\u0002\u0018\u0002\n\u0000\b\u0080\b\u0018\u0000¨\u0006\u0001"}, d2 = {"Landroidx/compose/ui/semantics/AppendedSemanticsElement;", "ui_release"}, k = 1, mv = {1, 8, 0}, xi = 48)
/* loaded from: classes.dex */
public final /* data */ class AppendedSemanticsElement implements d {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final Function1 f1213b;

    public AppendedSemanticsElement(boolean z5, Function1 properties) {
        Intrinsics.checkNotNullParameter(properties, "properties");
        this.a = z5;
        this.f1213b = properties;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof AppendedSemanticsElement)) {
            return false;
        }
        AppendedSemanticsElement appendedSemanticsElement = (AppendedSemanticsElement) obj;
        return this.a == appendedSemanticsElement.a && Intrinsics.areEqual(this.f1213b, appendedSemanticsElement.f1213b);
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v1, types: [int] */
    /* JADX WARN: Type inference failed for: r0v3 */
    /* JADX WARN: Type inference failed for: r0v4 */
    public final int hashCode() {
        boolean z5 = this.a;
        ?? r02 = z5;
        if (z5) {
            r02 = 1;
        }
        return this.f1213b.hashCode() + (r02 * 31);
    }

    public final String toString() {
        return "AppendedSemanticsElement(mergeDescendants=" + this.a + ", properties=" + this.f1213b + ')';
    }
}
