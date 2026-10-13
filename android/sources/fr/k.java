package fr;

import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class k extends a {

    /* renamed from: d, reason: collision with root package name */
    public static final k f9023d = new k();

    @Override // fr.a
    public final int a() {
        return 0;
    }

    /* JADX WARN: Multi-variable type inference failed */
    @Override // fr.a
    public final void b(int i5, yq.j jVar) {
        Void value = (Void) jVar;
        Intrinsics.checkNotNullParameter(value, "value");
        throw new IllegalStateException();
    }

    @Override // fr.a
    public final /* bridge */ /* synthetic */ Object get(int i5) {
        return null;
    }

    @Override // fr.a, java.lang.Iterable
    public final Iterator iterator() {
        return new j();
    }
}
