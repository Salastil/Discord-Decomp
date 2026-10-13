package qo;

import java.io.File;
import java.util.ArrayDeque;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h extends kotlin.collections.b {

    /* renamed from: i, reason: collision with root package name */
    public final ArrayDeque f16927i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ j f16928v;

    public h(j jVar) {
        this.f16928v = jVar;
        ArrayDeque arrayDeque = new ArrayDeque();
        this.f16927i = arrayDeque;
        File rootFile = jVar.a;
        if (rootFile.isDirectory()) {
            arrayDeque.push(b(rootFile));
        } else if (!rootFile.isFile()) {
            this.f13487d = 2;
        } else {
            Intrinsics.checkNotNullParameter(rootFile, "rootFile");
            arrayDeque.push(new f(rootFile));
        }
    }

    @Override // kotlin.collections.b
    public final void a() {
        File file;
        File a;
        while (true) {
            ArrayDeque arrayDeque = this.f16927i;
            i iVar = (i) arrayDeque.peek();
            if (iVar == null) {
                file = null;
                break;
            }
            a = iVar.a();
            if (a == null) {
                arrayDeque.pop();
            } else if (Intrinsics.areEqual(a, iVar.a) || !a.isDirectory() || arrayDeque.size() >= this.f16928v.f16933f) {
                break;
            } else {
                arrayDeque.push(b(a));
            }
        }
        file = a;
        if (file == null) {
            this.f13487d = 2;
        } else {
            this.f13488e = file;
            this.f13487d = 1;
        }
    }

    public final d b(File file) {
        int ordinal = this.f16928v.f16929b.ordinal();
        if (ordinal == 0) {
            return new g(this, file);
        }
        if (ordinal == 1) {
            return new e(this, file);
        }
        throw new fo.n();
    }
}
