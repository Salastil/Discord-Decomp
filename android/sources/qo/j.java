package qo;

import java.io.File;
import java.util.Iterator;
import kotlin.io.FileWalkDirection;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.sequences.Sequence;

/* loaded from: classes3.dex */
public final class j implements Sequence {
    public final File a;

    /* renamed from: b, reason: collision with root package name */
    public final FileWalkDirection f16929b;

    /* renamed from: c, reason: collision with root package name */
    public final Function1 f16930c;

    /* renamed from: d, reason: collision with root package name */
    public final Function1 f16931d;

    /* renamed from: e, reason: collision with root package name */
    public final Function2 f16932e;

    /* renamed from: f, reason: collision with root package name */
    public final int f16933f;

    public j(File file, FileWalkDirection fileWalkDirection, Function1 function1, Function1 function12, Function2 function2, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        fileWalkDirection = (i6 & 2) != 0 ? FileWalkDirection.f13539d : fileWalkDirection;
        i5 = (i6 & 32) != 0 ? Integer.MAX_VALUE : i5;
        this.a = file;
        this.f16929b = fileWalkDirection;
        this.f16930c = function1;
        this.f16931d = function12;
        this.f16932e = function2;
        this.f16933f = i5;
    }

    @Override // kotlin.sequences.Sequence
    public final Iterator iterator() {
        return new h(this);
    }
}
