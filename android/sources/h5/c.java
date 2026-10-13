package h5;

import android.hardware.Camera;
import android.os.Process;
import android.view.WindowManager;
import com.budiyev.android.codescanner.CodeScanner;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes.dex */
public final class c extends Thread {

    /* renamed from: d, reason: collision with root package name */
    public final int f9525d;

    /* renamed from: e, reason: collision with root package name */
    public final int f9526e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ CodeScanner f9527i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public c(CodeScanner codeScanner, int i5, int i6) {
        super("cs-init");
        this.f9527i = codeScanner;
        this.f9525d = i5;
        this.f9526e = i6;
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r16v0 */
    /* JADX WARN: Type inference failed for: r16v1 */
    /* JADX WARN: Type inference failed for: r16v5 */
    @Override // java.lang.Thread, java.lang.Runnable
    public final void run() {
        Camera camera;
        Camera camera2;
        int i5;
        boolean z5;
        q qVar;
        q qVar2;
        q qVar3;
        List<String> supportedSceneModes;
        int i6;
        Process.setThreadPriority(10);
        Camera.CameraInfo cameraInfo = new Camera.CameraInfo();
        int i10 = this.f9527i.f3714w;
        boolean z6 = true;
        if (i10 == -1 || i10 == -2) {
            int numberOfCameras = Camera.getNumberOfCameras();
            int i11 = i10 == -1 ? 0 : 1;
            int i12 = 0;
            while (true) {
                if (i12 >= numberOfCameras) {
                    camera = null;
                    break;
                }
                Camera.getCameraInfo(i12, cameraInfo);
                if (cameraInfo.facing == i11) {
                    camera = Camera.open(i12);
                    this.f9527i.f3714w = i12;
                    break;
                }
                i12++;
            }
            camera2 = camera;
        } else {
            camera2 = Camera.open(i10);
            Camera.getCameraInfo(i10, cameraInfo);
        }
        Camera camera3 = camera2;
        if (camera3 == null) {
            throw new ai.k("Unable to access camera");
        }
        Camera.Parameters parameters = camera3.getParameters();
        if (parameters == null) {
            throw new ai.k("Unable to configure camera");
        }
        WindowManager windowManager = (WindowManager) this.f9527i.f3695b.getSystemService("window");
        if (windowManager == null) {
            throw new ai.k("Unable to access window manager");
        }
        int rotation = windowManager.getDefaultDisplay().getRotation();
        if (rotation == 0) {
            i5 = 0;
        } else if (rotation == 1) {
            i5 = 90;
        } else if (rotation == 2) {
            i5 = 180;
        } else if (rotation == 3) {
            i5 = 270;
        } else {
            if (rotation % 90 != 0) {
                throw new ai.k("Invalid display rotation");
            }
            i5 = (rotation + 360) % 360;
        }
        int i13 = (((cameraInfo.facing != 1 ? 360 : 180) + cameraInfo.orientation) - i5) % 360;
        boolean z7 = i13 == 90 || i13 == 270;
        int i14 = z7 ? this.f9526e : this.f9525d;
        int i15 = z7 ? this.f9525d : this.f9526e;
        List<Camera.Size> supportedPreviewSizes = parameters.getSupportedPreviewSizes();
        if (supportedPreviewSizes != null && !supportedPreviewSizes.isEmpty()) {
            Collections.sort(supportedPreviewSizes, new bg.s(5));
            float f2 = i14 / i15;
            loop0: for (float f10 = 0.3f; f10 <= 3.0f; f10 += 0.1f) {
                for (Camera.Size size : supportedPreviewSizes) {
                    int i16 = size.width;
                    int i17 = size.height;
                    boolean z8 = z6;
                    if (i16 * i17 >= 589824 && Math.abs(f2 - (i16 / i17)) <= f10) {
                        qVar = new q(i16, i17);
                        z5 = z8;
                        break loop0;
                    }
                    z6 = z8 ? 1 : 0;
                }
            }
        }
        z5 = z6;
        Camera.Size previewSize = parameters.getPreviewSize();
        if (previewSize == null) {
            throw new ai.k("Unable to configure camera preview size");
        }
        qVar = new q(previewSize.width, previewSize.height);
        int i18 = qVar.a;
        int i19 = qVar.f9557b;
        parameters.setPreviewSize(i18, i19);
        parameters.setPreviewFormat(17);
        int i20 = z7 ? i19 : i18;
        int i21 = z7 ? i18 : i19;
        int i22 = this.f9525d;
        int i23 = this.f9526e;
        if (i20 == i22 && i21 == i23) {
            qVar2 = new q(i22, i23);
        } else {
            int i24 = (i20 * i23) / i21;
            qVar2 = i24 < i22 ? new q(i22, (i21 * i22) / i20) : new q(i24, i23);
        }
        List<String> supportedFocusModes = parameters.getSupportedFocusModes();
        boolean z10 = (supportedFocusModes == null || !(supportedFocusModes.contains("auto") || supportedFocusModes.contains("continuous-picture"))) ? false : z5;
        if (!z10) {
            this.f9527i.f3712u = false;
        }
        q qVar4 = new q(this.f9525d, this.f9526e);
        if (z10 && this.f9527i.f3712u) {
            e4.f.H(parameters, this.f9527i.G);
            s frameRect = this.f9527i.f3697d.getFrameRect();
            if (frameRect != null) {
                boolean z11 = (i13 == 90 || i13 == 270) ? z5 : false;
                int i25 = z11 ? i19 : i18;
                if (!z11) {
                    i18 = i19;
                }
                e4.f.n(parameters, e4.f.t(i25, i18, frameRect, qVar2, qVar4), i25, i18, i13);
            }
        }
        List<String> supportedFlashModes = parameters.getSupportedFlashModes();
        boolean z12 = (supportedFlashModes == null || !supportedFlashModes.contains("torch")) ? false : z5;
        if (!z12) {
            this.f9527i.f3713v = false;
        }
        List<int[]> supportedPreviewFpsRange = parameters.getSupportedPreviewFpsRange();
        if (supportedPreviewFpsRange != null && !supportedPreviewFpsRange.isEmpty()) {
            Collections.sort(supportedPreviewFpsRange, new bg.s(6));
            Iterator<int[]> it = supportedPreviewFpsRange.iterator();
            while (true) {
                if (!it.hasNext()) {
                    break;
                }
                int[] next = it.next();
                int i26 = next[0];
                if (i26 >= 10000 && (i6 = next[z5]) <= 30000) {
                    parameters.setPreviewFpsRange(i26, i6);
                    break;
                }
            }
        }
        if (!"barcode".equals(parameters.getSceneMode()) && (supportedSceneModes = parameters.getSupportedSceneModes()) != null && supportedSceneModes.contains("barcode")) {
            parameters.setSceneMode("barcode");
        }
        if (parameters.isVideoStabilizationSupported() && !parameters.getVideoStabilization()) {
            parameters.setVideoStabilization(z5);
        }
        camera3.setParameters(parameters);
        camera3.setDisplayOrientation(i13);
        synchronized (this.f9527i.a) {
            q qVar5 = qVar;
            CodeScanner codeScanner = this.f9527i;
            n nVar = new n(codeScanner.f3703l, codeScanner.f3704m, codeScanner.f3705n, this.f9527i.f3706o);
            qVar3 = qVar2;
            this.f9527i.f3708q = new o(camera3, cameraInfo, nVar, qVar5, qVar3, qVar4, i13, z10, z12);
            if (nVar.f9548h != 1) {
                throw new IllegalStateException("Illegal decoder state");
            }
            nVar.f9542b.start();
            this.f9527i.f3709r = false;
            this.f9527i.f3710s = true;
        }
        CodeScanner codeScanner2 = this.f9527i;
        codeScanner2.f3696c.post(new ii.o(codeScanner2, qVar3, 11, false));
    }
}
