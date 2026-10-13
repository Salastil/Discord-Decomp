package t8;

import android.os.Environment;
import android.os.StatFs;
import android.os.SystemClock;
import java.io.File;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.ReentrantLock;
import o8.h;

/* loaded from: classes3.dex */
public final class a {

    /* renamed from: h, reason: collision with root package name */
    public static a f18229h;

    /* renamed from: i, reason: collision with root package name */
    public static final long f18230i = TimeUnit.MINUTES.toMillis(2);

    /* renamed from: b, reason: collision with root package name */
    public volatile File f18231b;

    /* renamed from: d, reason: collision with root package name */
    public volatile File f18233d;

    /* renamed from: e, reason: collision with root package name */
    public long f18234e;
    public volatile StatFs a = null;

    /* renamed from: c, reason: collision with root package name */
    public volatile StatFs f18232c = null;

    /* renamed from: g, reason: collision with root package name */
    public volatile boolean f18236g = false;

    /* renamed from: f, reason: collision with root package name */
    public final ReentrantLock f18235f = new ReentrantLock();

    public static StatFs b(StatFs statFs, File file) {
        if (file != null && file.exists()) {
            try {
                if (statFs == null) {
                    return new StatFs(file.getAbsolutePath());
                }
                statFs.restat(file.getAbsolutePath());
                return statFs;
            } catch (IllegalArgumentException unused) {
            } catch (Throwable th2) {
                h.h(th2);
                throw null;
            }
        }
        return null;
    }

    public final void a() {
        if (this.f18236g) {
            return;
        }
        this.f18235f.lock();
        try {
            if (!this.f18236g) {
                this.f18231b = Environment.getDataDirectory();
                this.f18233d = Environment.getExternalStorageDirectory();
                this.a = b(this.a, this.f18231b);
                this.f18232c = b(this.f18232c, this.f18233d);
                this.f18234e = SystemClock.uptimeMillis();
                this.f18236g = true;
            }
        } finally {
            this.f18235f.unlock();
        }
    }
}
