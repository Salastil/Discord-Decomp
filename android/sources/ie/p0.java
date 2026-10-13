package ie;

import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.content.res.Resources;
import android.net.Uri;
import android.text.TextUtils;
import java.io.EOFException;
import java.io.FileInputStream;
import java.io.IOException;
import java.nio.channels.FileChannel;

/* loaded from: classes3.dex */
public final class p0 extends h {
    public AssetFileDescriptor E;
    public FileInputStream F;
    public long G;
    public boolean H;

    /* renamed from: w, reason: collision with root package name */
    public final Resources f10719w;

    /* renamed from: x, reason: collision with root package name */
    public final String f10720x;

    /* renamed from: y, reason: collision with root package name */
    public Uri f10721y;

    public p0(Context context) {
        super(false);
        this.f10719w = context.getResources();
        this.f10720x = context.getPackageName();
    }

    public static Uri buildRawResourceUri(int i5) {
        return Uri.parse("rawresource:///" + i5);
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        this.f10721y = null;
        try {
            try {
                FileInputStream fileInputStream = this.F;
                if (fileInputStream != null) {
                    fileInputStream.close();
                }
                this.F = null;
                try {
                    try {
                        AssetFileDescriptor assetFileDescriptor = this.E;
                        if (assetFileDescriptor != null) {
                            assetFileDescriptor.close();
                        }
                    } catch (IOException e9) {
                        throw new o0(null, e9, 2000);
                    }
                } finally {
                    this.E = null;
                    if (this.H) {
                        this.H = false;
                        c();
                    }
                }
            } catch (IOException e10) {
                throw new o0(null, e10, 2000);
            }
        } catch (Throwable th2) {
            this.F = null;
            try {
                try {
                    AssetFileDescriptor assetFileDescriptor2 = this.E;
                    if (assetFileDescriptor2 != null) {
                        assetFileDescriptor2.close();
                    }
                    this.E = null;
                    if (this.H) {
                        this.H = false;
                        c();
                    }
                    throw th2;
                } catch (IOException e11) {
                    throw new o0(null, e11, 2000);
                }
            } finally {
                this.E = null;
                if (this.H) {
                    this.H = false;
                    c();
                }
            }
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:8:0x0047, code lost:
    
        if (r7.matches("\\d+") != false) goto L84;
     */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00c9  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x016d  */
    @Override // com.google.android.exoplayer2.upstream.DataSource
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final long o(p pVar) {
        int parseInt;
        AssetFileDescriptor openRawResourceFd;
        Uri uri = pVar.a;
        long j = pVar.f10716g;
        long j5 = pVar.f10715f;
        Uri normalizeScheme = uri.normalizeScheme();
        this.f10721y = normalizeScheme;
        boolean equals = TextUtils.equals("rawresource", normalizeScheme.getScheme());
        Resources resources = this.f10719w;
        try {
            try {
                if (!equals) {
                    if (TextUtils.equals("android.resource", normalizeScheme.getScheme()) && normalizeScheme.getPathSegments().size() == 1) {
                        String lastPathSegment = normalizeScheme.getLastPathSegment();
                        lastPathSegment.getClass();
                    }
                    if (!TextUtils.equals("android.resource", normalizeScheme.getScheme())) {
                        throw new o0("Unsupported URI scheme (" + normalizeScheme.getScheme() + "). Only rawresource and android.resource are supported.", null, 1004);
                    }
                    String path = normalizeScheme.getPath();
                    path.getClass();
                    if (path.startsWith("/")) {
                        path = path.substring(1);
                    }
                    String host = normalizeScheme.getHost();
                    parseInt = resources.getIdentifier(com.discord.chat.bridge.botuikit.a.j(new StringBuilder(), TextUtils.isEmpty(host) ? "" : k0.d.k(host, ":"), path), "raw", this.f10720x);
                    if (parseInt == 0) {
                        throw new o0("Resource not found.", null, 2005);
                    }
                    d();
                    openRawResourceFd = resources.openRawResourceFd(parseInt);
                    this.E = openRawResourceFd;
                    if (openRawResourceFd != null) {
                        throw new o0("Resource is compressed: " + normalizeScheme, null, 2000);
                    }
                    long length = openRawResourceFd.getLength();
                    FileInputStream fileInputStream = new FileInputStream(openRawResourceFd.getFileDescriptor());
                    this.F = fileInputStream;
                    try {
                        if (length != -1 && j5 > length) {
                            throw new o0(null, null, 2008);
                        }
                        long startOffset = openRawResourceFd.getStartOffset();
                        long skip = fileInputStream.skip(startOffset + j5) - startOffset;
                        if (skip != j5) {
                            throw new o0(null, null, 2008);
                        }
                        if (length == -1) {
                            FileChannel channel = fileInputStream.getChannel();
                            if (channel.size() == 0) {
                                this.G = -1L;
                            } else {
                                long size = channel.size() - channel.position();
                                this.G = size;
                                if (size < 0) {
                                    throw new o0(null, null, 2008);
                                }
                            }
                        } else {
                            long j7 = length - skip;
                            this.G = j7;
                            if (j7 < 0) {
                                throw new m(2008);
                            }
                        }
                        if (j != -1) {
                            long j10 = this.G;
                            this.G = j10 == -1 ? j : Math.min(j10, j);
                        }
                        this.H = true;
                        e(pVar);
                        return j != -1 ? j : this.G;
                    } catch (o0 e9) {
                        throw e9;
                    } catch (IOException e10) {
                        throw new o0(null, e10, 2000);
                    }
                }
                openRawResourceFd = resources.openRawResourceFd(parseInt);
                this.E = openRawResourceFd;
                if (openRawResourceFd != null) {
                }
            } catch (Resources.NotFoundException e11) {
                throw new o0(null, e11, 2005);
            }
            String lastPathSegment2 = normalizeScheme.getLastPathSegment();
            lastPathSegment2.getClass();
            parseInt = Integer.parseInt(lastPathSegment2);
            d();
        } catch (NumberFormatException unused) {
            throw new o0("Resource identifier must be an integer.", null, 1004);
        }
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            return 0;
        }
        long j = this.G;
        if (j != 0) {
            if (j != -1) {
                try {
                    i6 = (int) Math.min(j, i6);
                } catch (IOException e9) {
                    throw new o0(null, e9, 2000);
                }
            }
            FileInputStream fileInputStream = this.F;
            int i10 = ke.d0.a;
            int read = fileInputStream.read(bArr, i5, i6);
            if (read != -1) {
                long j5 = this.G;
                if (j5 != -1) {
                    this.G = j5 - read;
                }
                b(read);
                return read;
            }
            if (this.G != -1) {
                throw new o0("End of stream reached having not read sufficient data.", new EOFException(), 2000);
            }
        }
        return -1;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return this.f10721y;
    }
}
