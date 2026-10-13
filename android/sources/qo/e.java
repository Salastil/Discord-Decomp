package qo;

import java.io.File;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e extends d {

    /* renamed from: b, reason: collision with root package name */
    public boolean f16917b;

    /* renamed from: c, reason: collision with root package name */
    public File[] f16918c;

    /* renamed from: d, reason: collision with root package name */
    public int f16919d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f16920e;

    /* renamed from: f, reason: collision with root package name */
    public final /* synthetic */ h f16921f;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public e(h hVar, File rootDir) {
        super(rootDir);
        Intrinsics.checkNotNullParameter(rootDir, "rootDir");
        this.f16921f = hVar;
    }

    @Override // qo.i
    public final File a() {
        j jVar = this.f16921f.f16928v;
        boolean z5 = this.f16920e;
        File file = this.a;
        if (!z5 && this.f16918c == null) {
            Function1 function1 = jVar.f16930c;
            if (function1 == null || ((Boolean) function1.invoke(file)).booleanValue()) {
                File[] listFiles = file.listFiles();
                this.f16918c = listFiles;
                if (listFiles == null) {
                    Function2 function2 = jVar.f16932e;
                    if (function2 != null) {
                        function2.invoke(file, new a(this.a, null, "Cannot list files in a directory", 2, null));
                    }
                    this.f16920e = true;
                }
            }
            return null;
        }
        File[] fileArr = this.f16918c;
        if (fileArr != null) {
            int i5 = this.f16919d;
            Intrinsics.checkNotNull(fileArr);
            if (i5 < fileArr.length) {
                File[] fileArr2 = this.f16918c;
                Intrinsics.checkNotNull(fileArr2);
                int i6 = this.f16919d;
                this.f16919d = i6 + 1;
                return fileArr2[i6];
            }
        }
        if (!this.f16917b) {
            this.f16917b = true;
            return file;
        }
        Function1 function12 = jVar.f16931d;
        if (function12 != null) {
            function12.invoke(file);
        }
        return null;
    }
}
