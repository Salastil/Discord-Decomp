package qo;

import java.io.File;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g extends d {

    /* renamed from: b, reason: collision with root package name */
    public boolean f16923b;

    /* renamed from: c, reason: collision with root package name */
    public File[] f16924c;

    /* renamed from: d, reason: collision with root package name */
    public int f16925d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ h f16926e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public g(h hVar, File rootDir) {
        super(rootDir);
        Intrinsics.checkNotNullParameter(rootDir, "rootDir");
        this.f16926e = hVar;
    }

    /* JADX WARN: Code restructure failed: missing block: B:29:0x005c, code lost:
    
        if (r1.length == 0) goto L31;
     */
    @Override // qo.i
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final File a() {
        Function2 function2;
        j jVar = this.f16926e.f16928v;
        boolean z5 = this.f16923b;
        File file = this.a;
        if (z5) {
            File[] fileArr = this.f16924c;
            if (fileArr != null) {
                int i5 = this.f16925d;
                Intrinsics.checkNotNull(fileArr);
                if (i5 >= fileArr.length) {
                    Function1 function1 = jVar.f16931d;
                    if (function1 != null) {
                        function1.invoke(file);
                        return null;
                    }
                }
            }
            if (this.f16924c == null) {
                File[] listFiles = file.listFiles();
                this.f16924c = listFiles;
                if (listFiles == null && (function2 = jVar.f16932e) != null) {
                    function2.invoke(file, new a(this.a, null, "Cannot list files in a directory", 2, null));
                }
                File[] fileArr2 = this.f16924c;
                if (fileArr2 != null) {
                    Intrinsics.checkNotNull(fileArr2);
                }
                Function1 function12 = jVar.f16931d;
                if (function12 != null) {
                    function12.invoke(file);
                }
            }
            File[] fileArr3 = this.f16924c;
            Intrinsics.checkNotNull(fileArr3);
            int i6 = this.f16925d;
            this.f16925d = i6 + 1;
            return fileArr3[i6];
        }
        Function1 function13 = jVar.f16930c;
        if (function13 == null || ((Boolean) function13.invoke(file)).booleanValue()) {
            this.f16923b = true;
            return file;
        }
        return null;
    }
}
