package org.webrtc;

import org.webrtc.GlGenericDrawer;

/* loaded from: classes4.dex */
public class GlRectDrawer extends GlGenericDrawer {
    private static final String FRAGMENT_SHADER = "void main() {\n  gl_FragColor = sample(tc);\n}\n";

    public static class ShaderCallbacks implements GlGenericDrawer.ShaderCallbacks {
        public /* synthetic */ ShaderCallbacks(int i5) {
            this();
        }

        @Override // org.webrtc.GlGenericDrawer.ShaderCallbacks
        public void onNewShader(GlShader glShader) {
        }

        @Override // org.webrtc.GlGenericDrawer.ShaderCallbacks
        public void onPrepareShader(GlShader glShader, float[] fArr, int i5, int i6, int i10, int i11) {
        }

        private ShaderCallbacks() {
        }
    }

    public GlRectDrawer() {
        super(FRAGMENT_SHADER, new ShaderCallbacks(0));
    }

    @Override // org.webrtc.GlGenericDrawer, org.webrtc.RendererCommon.GlDrawer
    public /* bridge */ /* synthetic */ void drawOes(int i5, float[] fArr, int i6, int i10, int i11, int i12, int i13, int i14) {
        super.drawOes(i5, fArr, i6, i10, i11, i12, i13, i14);
    }

    @Override // org.webrtc.GlGenericDrawer, org.webrtc.RendererCommon.GlDrawer
    public /* bridge */ /* synthetic */ void drawRgb(int i5, float[] fArr, int i6, int i10, int i11, int i12, int i13, int i14) {
        super.drawRgb(i5, fArr, i6, i10, i11, i12, i13, i14);
    }

    @Override // org.webrtc.GlGenericDrawer, org.webrtc.RendererCommon.GlDrawer
    public /* bridge */ /* synthetic */ void drawYuv(int[] iArr, float[] fArr, int i5, int i6, int i10, int i11, int i12, int i13) {
        super.drawYuv(iArr, fArr, i5, i6, i10, i11, i12, i13);
    }

    @Override // org.webrtc.GlGenericDrawer, org.webrtc.RendererCommon.GlDrawer
    public /* bridge */ /* synthetic */ void release() {
        super.release();
    }
}
