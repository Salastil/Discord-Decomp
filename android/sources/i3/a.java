package i3;

import android.util.Log;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.nio.channels.FileChannel;
import java.util.HashMap;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReentrantLock;
import k0.d;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class a {

    /* renamed from: e, reason: collision with root package name */
    public static final HashMap f10459e = new HashMap();
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final File f10460b;

    /* renamed from: c, reason: collision with root package name */
    public final Lock f10461c;

    /* renamed from: d, reason: collision with root package name */
    public FileChannel f10462d;

    public a(String name, File lockDir, boolean z5) {
        Lock lock;
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(lockDir, "lockDir");
        this.a = z5;
        File file = new File(lockDir, d.k(name, ".lck"));
        this.f10460b = file;
        String absolutePath = file.getAbsolutePath();
        Intrinsics.checkNotNullExpressionValue(absolutePath, "lockFile.absolutePath");
        HashMap hashMap = f10459e;
        synchronized (hashMap) {
            try {
                Object obj = hashMap.get(absolutePath);
                if (obj == null) {
                    obj = new ReentrantLock();
                    hashMap.put(absolutePath, obj);
                }
                lock = (Lock) obj;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        this.f10461c = lock;
    }

    public final void a(boolean z5) {
        File file = this.f10460b;
        this.f10461c.lock();
        if (z5) {
            try {
                File parentFile = file.getParentFile();
                if (parentFile != null) {
                    parentFile.mkdirs();
                }
                FileChannel channel = new FileOutputStream(file).getChannel();
                channel.lock();
                this.f10462d = channel;
            } catch (IOException e9) {
                this.f10462d = null;
                Log.w("SupportSQLiteLock", "Unable to grab file lock.", e9);
            }
        }
    }

    public final void b() {
        try {
            FileChannel fileChannel = this.f10462d;
            if (fileChannel != null) {
                fileChannel.close();
            }
        } catch (IOException unused) {
        }
        this.f10461c.unlock();
    }
}
