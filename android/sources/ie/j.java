package ie;

import android.content.ContentResolver;
import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.net.Uri;
import android.os.Bundle;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.channels.FileChannel;

/* loaded from: classes3.dex */
public final class j extends h {
    public FileInputStream E;
    public long F;
    public boolean G;

    /* renamed from: w, reason: collision with root package name */
    public final ContentResolver f10678w;

    /* renamed from: x, reason: collision with root package name */
    public Uri f10679x;

    /* renamed from: y, reason: collision with root package name */
    public AssetFileDescriptor f10680y;

    public j(Context context) {
        super(false);
        this.f10678w = context.getContentResolver();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
        this.f10679x = null;
        try {
            try {
                FileInputStream fileInputStream = this.E;
                if (fileInputStream != null) {
                    fileInputStream.close();
                }
                this.E = null;
                try {
                    try {
                        AssetFileDescriptor assetFileDescriptor = this.f10680y;
                        if (assetFileDescriptor != null) {
                            assetFileDescriptor.close();
                        }
                    } catch (IOException e9) {
                        throw new i(2000, e9);
                    }
                } finally {
                    this.f10680y = null;
                    if (this.G) {
                        this.G = false;
                        c();
                    }
                }
            } catch (IOException e10) {
                throw new i(2000, e10);
            }
        } catch (Throwable th2) {
            this.E = null;
            try {
                try {
                    AssetFileDescriptor assetFileDescriptor2 = this.f10680y;
                    if (assetFileDescriptor2 != null) {
                        assetFileDescriptor2.close();
                    }
                    this.f10680y = null;
                    if (this.G) {
                        this.G = false;
                        c();
                    }
                    throw th2;
                } catch (IOException e11) {
                    throw new i(2000, e11);
                }
            } finally {
                this.f10680y = null;
                if (this.G) {
                    this.G = false;
                    c();
                }
            }
        }
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(p pVar) {
        int i5;
        AssetFileDescriptor openAssetFileDescriptor;
        try {
            try {
                Uri uri = pVar.a;
                long j = pVar.f10716g;
                long j5 = pVar.f10715f;
                Uri normalizeScheme = uri.normalizeScheme();
                this.f10679x = normalizeScheme;
                d();
                boolean equals = "content".equals(normalizeScheme.getScheme());
                ContentResolver contentResolver = this.f10678w;
                if (equals) {
                    Bundle bundle = new Bundle();
                    bundle.putBoolean("android.provider.extra.ACCEPT_ORIGINAL_MEDIA_FORMAT", true);
                    openAssetFileDescriptor = contentResolver.openTypedAssetFileDescriptor(normalizeScheme, "*/*", bundle);
                } else {
                    openAssetFileDescriptor = contentResolver.openAssetFileDescriptor(normalizeScheme, "r");
                }
                this.f10680y = openAssetFileDescriptor;
                if (openAssetFileDescriptor == null) {
                    i5 = 2000;
                    try {
                        throw new i(2000, new IOException("Could not open file descriptor for: " + normalizeScheme));
                    } catch (IOException e9) {
                        e = e9;
                        if (e instanceof FileNotFoundException) {
                            i5 = 2005;
                        }
                        throw new i(i5, e);
                    }
                }
                long length = openAssetFileDescriptor.getLength();
                FileInputStream fileInputStream = new FileInputStream(openAssetFileDescriptor.getFileDescriptor());
                this.E = fileInputStream;
                if (length != -1 && j5 > length) {
                    throw new i(2008, null);
                }
                long startOffset = openAssetFileDescriptor.getStartOffset();
                long skip = fileInputStream.skip(startOffset + j5) - startOffset;
                if (skip != j5) {
                    throw new i(2008, null);
                }
                if (length == -1) {
                    FileChannel channel = fileInputStream.getChannel();
                    long size = channel.size();
                    if (size == 0) {
                        this.F = -1L;
                    } else {
                        long position = size - channel.position();
                        this.F = position;
                        if (position < 0) {
                            throw new i(2008, null);
                        }
                    }
                } else {
                    long j7 = length - skip;
                    this.F = j7;
                    if (j7 < 0) {
                        throw new i(2008, null);
                    }
                }
                if (j != -1) {
                    long j10 = this.F;
                    this.F = j10 == -1 ? j : Math.min(j10, j);
                }
                this.G = true;
                e(pVar);
                return j != -1 ? j : this.F;
            } catch (i e10) {
                throw e10;
            }
        } catch (IOException e11) {
            e = e11;
            i5 = 2000;
        }
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        if (i6 == 0) {
            return 0;
        }
        long j = this.F;
        if (j != 0) {
            if (j != -1) {
                try {
                    i6 = (int) Math.min(j, i6);
                } catch (IOException e9) {
                    throw new i(2000, e9);
                }
            }
            FileInputStream fileInputStream = this.E;
            int i10 = ke.d0.a;
            int read = fileInputStream.read(bArr, i5, i6);
            if (read != -1) {
                long j5 = this.F;
                if (j5 != -1) {
                    this.F = j5 - read;
                }
                b(read);
                return read;
            }
        }
        return -1;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return this.f10679x;
    }
}
