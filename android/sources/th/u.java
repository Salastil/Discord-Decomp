package th;

import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: classes3.dex */
public final class u extends uh.d {

    /* renamed from: d, reason: collision with root package name */
    public final TreeMap f18594d = new TreeMap();

    public u(File file, File file2) {
        ArrayList a = o1.a(file, file2);
        if (a.isEmpty()) {
            throw new l0(String.format("Virtualized slice archive empty for %s, %s", file, file2));
        }
        Iterator it = a.iterator();
        long j = 0;
        while (it.hasNext()) {
            File file3 = (File) it.next();
            this.f18594d.put(Long.valueOf(j), file3);
            j += file3.length();
        }
    }

    public final long c() {
        Map.Entry lastEntry = this.f18594d.lastEntry();
        return ((File) lastEntry.getValue()).length() + ((Long) lastEntry.getKey()).longValue();
    }

    public final FileInputStream f(long j, Long l6) {
        FileInputStream fileInputStream = new FileInputStream((File) this.f18594d.get(l6));
        if (fileInputStream.skip(j - l6.longValue()) == j - l6.longValue()) {
            return fileInputStream;
        }
        throw new l0("Virtualized slice archive corrupt, could not skip in file with key " + l6);
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
    }
}
