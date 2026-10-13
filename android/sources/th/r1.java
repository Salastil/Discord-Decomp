package th;

import java.io.File;
import java.io.IOException;
import java.util.Iterator;
import java.util.concurrent.Executor;

/* loaded from: classes3.dex */
public final /* synthetic */ class r1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18564d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ s1 f18565e;

    public /* synthetic */ r1(s1 s1Var, int i5) {
        this.f18564d = i5;
        this.f18565e = s1Var;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f18564d) {
            case 0:
                s1 s1Var = this.f18565e;
                u1 u1Var = (u1) s1Var.f18579i.a();
                s sVar = s1Var.a;
                jg.l g6 = u1Var.g(sVar.o());
                uh.f fVar = s1Var.j;
                g6.d((Executor) fVar.a(), new qa.t(6, sVar));
                g6.c((Executor) fVar.a(), new j8.c());
                break;
            default:
                s sVar2 = this.f18565e.a;
                Iterator it = sVar2.e().iterator();
                while (true) {
                    int i5 = 0;
                    if (!it.hasNext()) {
                        Iterator it2 = sVar2.e().iterator();
                        while (it2.hasNext()) {
                            File file = (File) it2.next();
                            if (file.listFiles() != null) {
                                s.f(file);
                                long b10 = s.b(file, false);
                                if (sVar2.f18569b.a() != b10) {
                                    try {
                                        new File(new File(file, String.valueOf(b10)), "stale.tmp").createNewFile();
                                    } catch (IOException unused) {
                                        s.f18566c.b("Could not write staleness marker.", new Object[0]);
                                    }
                                }
                                for (File file2 : file.listFiles()) {
                                    s.f(file2);
                                }
                            }
                        }
                        if (new File(sVar2.d(), "_tmp").exists()) {
                            File[] listFiles = new File(sVar2.d(), "_tmp").listFiles();
                            int length = listFiles.length;
                            while (i5 < length) {
                                File file3 = listFiles[i5];
                                if (System.currentTimeMillis() - file3.lastModified() > s.f18567d) {
                                    s.g(file3);
                                } else {
                                    s.f(file3);
                                }
                                i5++;
                            }
                            break;
                        }
                    } else {
                        File file4 = (File) it.next();
                        if (file4.listFiles() != null) {
                            File[] listFiles2 = file4.listFiles();
                            int length2 = listFiles2.length;
                            while (i5 < length2) {
                                File file5 = listFiles2[i5];
                                File file6 = new File(file5, "stale.tmp");
                                if (file6.exists() && System.currentTimeMillis() - file6.lastModified() > s.f18568e) {
                                    s.g(file5);
                                }
                                i5++;
                            }
                        }
                    }
                }
                break;
        }
    }
}
