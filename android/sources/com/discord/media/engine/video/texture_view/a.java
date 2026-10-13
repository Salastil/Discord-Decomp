package com.discord.media.engine.video.texture_view;

import android.media.ImageReader;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements ImageReader.OnImageAvailableListener {
    @Override // android.media.ImageReader.OnImageAvailableListener
    public final void onImageAvailable(ImageReader imageReader) {
        PlaceholderSinkPool.createReader$lambda$9(imageReader);
    }
}
