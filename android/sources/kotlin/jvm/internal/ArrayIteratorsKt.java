package kotlin.jvm.internal;

import kotlin.Metadata;
import kotlin.collections.a0;
import kotlin.collections.f1;
import kotlin.collections.k0;
import kotlin.collections.p0;
import kotlin.collections.r0;
import kotlin.collections.s0;
import kotlin.collections.y;
import kotlin.collections.z;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000V\n\u0002\u0010\u0012\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0019\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0017\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0015\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0016\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0014\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0013\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0018\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0015\u0010\u0003\u001a\u00020\u00022\u0006\u0010\u0001\u001a\u00020\u0000¢\u0006\u0004\b\u0003\u0010\u0004\u001a\u0015\u0010\u0003\u001a\u00020\u00062\u0006\u0010\u0001\u001a\u00020\u0005¢\u0006\u0004\b\u0003\u0010\u0007\u001a\u0015\u0010\u0003\u001a\u00020\t2\u0006\u0010\u0001\u001a\u00020\b¢\u0006\u0004\b\u0003\u0010\n\u001a\u0015\u0010\u0003\u001a\u00020\f2\u0006\u0010\u0001\u001a\u00020\u000b¢\u0006\u0004\b\u0003\u0010\r\u001a\u0015\u0010\u0003\u001a\u00020\u000f2\u0006\u0010\u0001\u001a\u00020\u000e¢\u0006\u0004\b\u0003\u0010\u0010\u001a\u0015\u0010\u0003\u001a\u00020\u00122\u0006\u0010\u0001\u001a\u00020\u0011¢\u0006\u0004\b\u0003\u0010\u0013\u001a\u0015\u0010\u0003\u001a\u00020\u00152\u0006\u0010\u0001\u001a\u00020\u0014¢\u0006\u0004\b\u0003\u0010\u0016\u001a\u0015\u0010\u0003\u001a\u00020\u00182\u0006\u0010\u0001\u001a\u00020\u0017¢\u0006\u0004\b\u0003\u0010\u0019¨\u0006\u001a"}, d2 = {"", "array", "Lkotlin/collections/z;", "iterator", "([B)Lkotlin/collections/z;", "", "Lkotlin/collections/a0;", "([C)Lkotlin/collections/a0;", "", "Lkotlin/collections/f1;", "([S)Lkotlin/collections/f1;", "", "Lkotlin/collections/r0;", "([I)Lkotlin/collections/r0;", "", "Lkotlin/collections/s0;", "([J)Lkotlin/collections/s0;", "", "Lkotlin/collections/p0;", "([F)Lkotlin/collections/p0;", "", "Lkotlin/collections/k0;", "([D)Lkotlin/collections/k0;", "", "Lkotlin/collections/y;", "([Z)Lkotlin/collections/y;", "kotlin-stdlib"}, k = 2, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes3.dex */
public final class ArrayIteratorsKt {
    @NotNull
    public static final z iterator(@NotNull byte[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        return new ArrayByteIterator(array);
    }

    @NotNull
    public static final a0 iterator(@NotNull char[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        return new ArrayCharIterator(array);
    }

    @NotNull
    public static final f1 iterator(@NotNull short[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        return new ArrayShortIterator(array);
    }

    @NotNull
    public static final r0 iterator(@NotNull int[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        return new ArrayIntIterator(array);
    }

    @NotNull
    public static final s0 iterator(@NotNull long[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        return new ArrayLongIterator(array);
    }

    @NotNull
    public static final p0 iterator(@NotNull float[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        return new ArrayFloatIterator(array);
    }

    @NotNull
    public static final k0 iterator(@NotNull double[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        return new ArrayDoubleIterator(array);
    }

    @NotNull
    public static final y iterator(@NotNull boolean[] array) {
        Intrinsics.checkNotNullParameter(array, "array");
        return new ArrayBooleanIterator(array);
    }
}
