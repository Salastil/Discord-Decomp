package com.facebook.soloader;

import android.content.Context;
import android.os.Parcel;
import android.util.Log;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.io.SyncFailedException;
import java.util.Arrays;

/* loaded from: classes3.dex */
public abstract class i0 extends e {

    /* renamed from: d, reason: collision with root package name */
    public final Context f5110d;

    public i0(Context context, String str, boolean z5) {
        super(new File(a3.e.n(new StringBuilder(), context.getApplicationInfo().dataDir, "/", str)), z5 ? 1 : 0);
        this.f5110d = context;
    }

    public static void i(File file, byte b10, boolean z5) {
        try {
            RandomAccessFile randomAccessFile = new RandomAccessFile(file, "rw");
            try {
                randomAccessFile.seek(0L);
                randomAccessFile.write(b10);
                randomAccessFile.setLength(randomAccessFile.getFilePointer());
                if (z5) {
                    randomAccessFile.getFD().sync();
                }
                randomAccessFile.close();
            } finally {
            }
        } catch (SyncFailedException e9) {
            Log.w("fb-UnpackingSoSource", "state file sync failed", e9);
        }
    }

    @Override // com.facebook.soloader.b0
    public void d(int i5) {
        File file = this.a;
        if (!file.mkdirs() && !file.isDirectory()) {
            throw new IOException("cannot mkdir: " + file);
        }
        if (!file.canWrite() && !file.setWritable(true)) {
            throw new IOException("error adding " + file.getCanonicalPath() + " write permission");
        }
        q qVar = null;
        try {
            try {
                q d6 = c0.d(file, new File(file, "dso_lock"));
                try {
                    r.h("fb-UnpackingSoSource", "locked dso store " + file);
                    if (!file.canWrite() && !file.setWritable(true)) {
                        throw new IOException("error adding " + file.getCanonicalPath() + " write permission");
                    }
                    if (!h(d6, i5)) {
                        String str = "dso store is up-to-date: " + file;
                        if (r.f("fb-UnpackingSoSource", 4)) {
                            Log.i("fb-UnpackingSoSource", str);
                        }
                        qVar = d6;
                    }
                    if (qVar != null) {
                        r.h("fb-UnpackingSoSource", "releasing dso store lock for " + file);
                        qVar.close();
                    } else {
                        r.h("fb-UnpackingSoSource", "not releasing dso store lock for " + file + " (syncer thread started)");
                    }
                    if (!file.canWrite() || file.setWritable(false)) {
                        return;
                    }
                    throw new IOException("error removing " + file.getCanonicalPath() + " write permission");
                } catch (Throwable th2) {
                    th = th2;
                    qVar = d6;
                    if (qVar != null) {
                        r.h("fb-UnpackingSoSource", "releasing dso store lock for " + file);
                        qVar.close();
                    } else {
                        r.h("fb-UnpackingSoSource", "not releasing dso store lock for " + file + " (syncer thread started)");
                    }
                    throw th;
                }
            } catch (Throwable th3) {
                th = th3;
            }
        } catch (Throwable th4) {
            if (!file.canWrite() || file.setWritable(false)) {
                throw th4;
            }
            throw new IOException("error removing " + file.getCanonicalPath() + " write permission");
        }
    }

    public byte[] e() {
        Parcel obtain = Parcel.obtain();
        h0 g6 = g();
        try {
            g0[] f2 = g6.f();
            obtain.writeInt(f2.length);
            for (g0 g0Var : f2) {
                obtain.writeString(g0Var.f5099d);
                obtain.writeString(g0Var.f5100e);
            }
            g6.close();
            byte[] marshall = obtain.marshall();
            obtain.recycle();
            return marshall;
        } catch (Throwable th2) {
            try {
                g6.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public g0[] f() {
        h0 g6 = g();
        try {
            g0[] f2 = g6.f();
            g6.close();
            return f2;
        } catch (Throwable th2) {
            try {
                g6.close();
            } catch (Throwable th3) {
                th2.addSuppressed(th3);
            }
            throw th2;
        }
    }

    public abstract h0 g();

    /* JADX WARN: Removed duplicated region for block: B:13:0x006a  */
    /* JADX WARN: Removed duplicated region for block: B:21:0x00c4 A[RETURN] */
    /* JADX WARN: Removed duplicated region for block: B:23:0x00c5  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final boolean h(q qVar, int i5) {
        byte b10;
        boolean z5;
        RandomAccessFile randomAccessFile;
        File file = this.a;
        File file2 = new File(file, "dso_state");
        byte[] e9 = e();
        if ((i5 & 2) == 0) {
            try {
                randomAccessFile = new RandomAccessFile(new File(file, "dso_deps"), "rw");
            } catch (IOException e10) {
                Log.w("fb-UnpackingSoSource", "failed to compare whether deps changed", e10);
            }
            try {
                if (randomAccessFile.length() != 0) {
                    int length = (int) randomAccessFile.length();
                    byte[] bArr = new byte[length];
                    if (randomAccessFile.read(bArr) != length) {
                        r.h("fb-UnpackingSoSource", "short read of so store deps file: marking unclean");
                    } else {
                        z5 = !Arrays.equals(bArr, e9);
                        randomAccessFile.close();
                        if (!z5) {
                            RandomAccessFile randomAccessFile2 = new RandomAccessFile(file2, "rw");
                            try {
                                if (randomAccessFile2.length() == 1) {
                                    try {
                                        b10 = randomAccessFile2.readByte();
                                    } catch (IOException e11) {
                                        r.h("fb-UnpackingSoSource", "dso store " + file + " regeneration interrupted: " + e11.getMessage());
                                    }
                                    if (b10 == 1) {
                                        r.h("fb-UnpackingSoSource", "dso store " + file + " regeneration not needed: state file clean");
                                        randomAccessFile2.close();
                                        if (b10 == 1) {
                                            return false;
                                        }
                                        boolean z6 = (i5 & 4) == 0;
                                        r.h("fb-UnpackingSoSource", "so store dirty: regenerating");
                                        i(file2, (byte) 0, z6);
                                        File[] listFiles = file.listFiles(new e0(0));
                                        if (listFiles == null) {
                                            throw new IOException("unable to list directory " + file);
                                        }
                                        for (File file3 : listFiles) {
                                            r.h("fb-UnpackingSoSource", "Deleting " + file3);
                                            c0.b(file3);
                                        }
                                        h0 g6 = g();
                                        try {
                                            g6.g(file);
                                            g6.close();
                                            randomAccessFile2 = new RandomAccessFile(new File(file, "dso_deps"), "rw");
                                            try {
                                                randomAccessFile2.write(e9);
                                                randomAccessFile2.setLength(randomAccessFile2.getFilePointer());
                                                randomAccessFile2.close();
                                                f0 f0Var = new f0(this, z6, file2, qVar);
                                                if ((i5 & 1) != 0) {
                                                    new Thread(f0Var, "SoSync:" + file.getName()).start();
                                                } else {
                                                    f0Var.run();
                                                }
                                                return true;
                                            } finally {
                                            }
                                        } finally {
                                        }
                                    }
                                }
                                b10 = 0;
                                randomAccessFile2.close();
                                if (b10 == 1) {
                                }
                            } finally {
                            }
                        }
                    }
                }
                randomAccessFile.close();
                z5 = true;
                if (!z5) {
                }
            } finally {
            }
        }
        b10 = 0;
        if (b10 == 1) {
        }
    }
}
