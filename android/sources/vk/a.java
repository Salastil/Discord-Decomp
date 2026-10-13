package vk;

import android.content.Context;
import android.content.res.AssetFileDescriptor;
import android.media.MediaExtractor;
import android.media.MediaFormat;
import android.media.MediaMetadataRetriever;
import android.net.Uri;
import android.util.Log;
import androidx.annotation.NonNull;
import com.linkedin.android.litr.io.MediaRange;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.Map;

/* loaded from: classes3.dex */
public class a {
    private final long duration;
    private final MediaExtractor mediaExtractor;
    private final MediaRange mediaRange;
    private int orientationHint;
    private long size;

    public a(Context context, Uri uri, MediaRange mediaRange) {
        StringBuilder sb2;
        this.mediaRange = mediaRange;
        MediaExtractor mediaExtractor = new MediaExtractor();
        this.mediaExtractor = mediaExtractor;
        MediaMetadataRetriever mediaMetadataRetriever = new MediaMetadataRetriever();
        AssetFileDescriptor assetFileDescriptor = null;
        try {
            mediaExtractor.setDataSource(context, uri, (Map<String, String>) null);
            mediaMetadataRetriever.setDataSource(context, uri);
            String extractMetadata = mediaMetadataRetriever.extractMetadata(24);
            if (extractMetadata != null) {
                this.orientationHint = Integer.parseInt(extractMetadata);
            }
            String extractMetadata2 = mediaMetadataRetriever.extractMetadata(9);
            this.duration = extractMetadata2 != null ? Long.parseLong(extractMetadata2) : -1L;
            try {
                if ("content".equals(uri.getScheme())) {
                    try {
                        assetFileDescriptor = context.getContentResolver().openAssetFileDescriptor(uri, "r");
                        long statSize = assetFileDescriptor != null ? assetFileDescriptor.getParcelFileDescriptor().getStatSize() : 0L;
                        r2 = statSize >= 0 ? statSize : -1L;
                        if (assetFileDescriptor != null) {
                            try {
                                assetFileDescriptor.close();
                            } catch (IOException e9) {
                                e = e9;
                                sb2 = new StringBuilder("Unable to close file descriptor from targetFile: ");
                                sb2.append(uri);
                                Log.e("a", sb2.toString(), e);
                                this.size = r2;
                                mediaMetadataRetriever.release();
                            }
                        }
                    } catch (FileNotFoundException | IllegalStateException e10) {
                        Log.e("a", "Unable to extract length from targetFile: " + uri, e10);
                        if (assetFileDescriptor != null) {
                            try {
                                assetFileDescriptor.close();
                            } catch (IOException e11) {
                                e = e11;
                                sb2 = new StringBuilder("Unable to close file descriptor from targetFile: ");
                                sb2.append(uri);
                                Log.e("a", sb2.toString(), e);
                                this.size = r2;
                                mediaMetadataRetriever.release();
                            }
                        }
                    }
                } else if ("file".equals(uri.getScheme()) && uri.getPath() != null) {
                    r2 = new File(uri.getPath()).length();
                }
                this.size = r2;
                try {
                    mediaMetadataRetriever.release();
                } catch (IOException unused) {
                }
            } catch (Throwable th2) {
                if (0 != 0) {
                    try {
                        assetFileDescriptor.close();
                    } catch (IOException e12) {
                        Log.e("a", "Unable to close file descriptor from targetFile: " + uri, e12);
                    }
                }
                throw th2;
            }
        } catch (IOException e13) {
            try {
                mediaMetadataRetriever.release();
            } catch (IOException unused2) {
            }
            throw new sk.b(uri, e13);
        }
    }

    public void advance() {
        this.mediaExtractor.advance();
    }

    public long getDuration() {
        return this.duration;
    }

    public int getOrientationHint() {
        return this.orientationHint;
    }

    public int getSampleFlags() {
        return this.mediaExtractor.getSampleFlags();
    }

    public long getSampleTime() {
        return this.mediaExtractor.getSampleTime();
    }

    public int getSampleTrackIndex() {
        return this.mediaExtractor.getSampleTrackIndex();
    }

    @NonNull
    public MediaRange getSelection() {
        return this.mediaRange;
    }

    public long getSize() {
        return this.size;
    }

    public int getTrackCount() {
        return this.mediaExtractor.getTrackCount();
    }

    @NonNull
    public MediaFormat getTrackFormat(int i5) {
        return this.mediaExtractor.getTrackFormat(i5);
    }

    public int readSampleData(@NonNull ByteBuffer byteBuffer, int i5) {
        return this.mediaExtractor.readSampleData(byteBuffer, i5);
    }

    public void release() {
        this.mediaExtractor.release();
    }

    public void seekTo(long j, int i5) {
        this.mediaExtractor.seekTo(j, i5);
    }

    public void selectTrack(int i5) {
        this.mediaExtractor.selectTrack(i5);
    }
}
