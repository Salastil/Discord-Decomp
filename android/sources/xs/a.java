package xs;

import java.io.File;
import java.io.IOException;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a {
    public static final a a = new a();

    public final void a(File file) {
        Intrinsics.checkNotNullParameter(file, "file");
        if (!file.delete() && file.exists()) {
            throw new IOException(Intrinsics.stringPlus("failed to delete ", file));
        }
    }

    public final void b(File directory) {
        Intrinsics.checkNotNullParameter(directory, "directory");
        File[] listFiles = directory.listFiles();
        if (listFiles == null) {
            throw new IOException(Intrinsics.stringPlus("not a readable directory: ", directory));
        }
        int length = listFiles.length;
        int i5 = 0;
        while (i5 < length) {
            File file = listFiles[i5];
            i5++;
            if (file.isDirectory()) {
                Intrinsics.checkNotNullExpressionValue(file, "file");
                b(file);
            }
            if (!file.delete()) {
                throw new IOException(Intrinsics.stringPlus("failed to delete ", file));
            }
        }
    }

    public final boolean c(File file) {
        Intrinsics.checkNotNullParameter(file, "file");
        return file.exists();
    }

    public final void d(File from, File to2) {
        Intrinsics.checkNotNullParameter(from, "from");
        Intrinsics.checkNotNullParameter(to2, "to");
        a(to2);
        if (from.renameTo(to2)) {
            return;
        }
        throw new IOException("failed to rename " + from + " to " + to2);
    }

    public final String toString() {
        return "FileSystem.SYSTEM";
    }
}
