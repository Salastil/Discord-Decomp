package p2;

import androidx.fragment.app.Fragment;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class m extends RuntimeException {

    /* renamed from: d, reason: collision with root package name */
    public final Fragment f16308d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public m(Fragment fragment, String str) {
        super(str);
        Intrinsics.checkNotNullParameter(fragment, "fragment");
        this.f16308d = fragment;
    }
}
