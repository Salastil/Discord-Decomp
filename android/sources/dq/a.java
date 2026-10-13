package dq;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a extends eq.a {

    /* renamed from: f, reason: collision with root package name */
    public static final a f7678f = new a(1, 0, 7);

    static {
        new a(new int[0]);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(int... numbers) {
        super(Arrays.copyOf(numbers, numbers.length));
        Intrinsics.checkNotNullParameter(numbers, "numbers");
    }
}
