package kotlin.text;

import java.util.Iterator;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final class c implements Sequence {
    public final CharSequence a;

    /* renamed from: b, reason: collision with root package name */
    public final int f13567b;

    /* renamed from: c, reason: collision with root package name */
    public final Function2 f13568c;

    public c(CharSequence input, int i5, Function2 getNextMatch) {
        Intrinsics.checkNotNullParameter(input, "input");
        Intrinsics.checkNotNullParameter(getNextMatch, "getNextMatch");
        this.a = input;
        this.f13567b = i5;
        this.f13568c = getNextMatch;
    }

    @Override // kotlin.sequences.Sequence
    public final Iterator iterator() {
        return new b(this);
    }
}
